#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <ncurses.h>
#define TBool            int
#define True             1
#define False            0
#define SHAPE_FOOD       '@'  // Food
#define SHAPE_SNAKE      '#'  // Snake body
#define GAMEWIN_YLEN     15
#define GAMEWIN_XLEN     60
#define LOGWIN_YLEN      7
#define LOGWIN_XLEN      (GAMEWIN_XLEN)
#define LOGBUF_NUM       (LOGWIN_YLEN-2)
#define LOGBUF_LEN       (GAMEWIN_XLEN-2)
#define MAXLEVEL         12

#define GetSnakeTail(s)  ((s)->head->front)

WINDOW *logwin; // Declare a log window
#define INITRUNLOG()     logwin = newlogw() // Create a log window by calling the custom function newlogw()
#define RUNLOG(str)      runlog(logwin, str) // Run the log window to display game prompts
#define DESTROYRUNLOG()  delwin(logwin)

int g_level; // Player level, a global variable
enum TDirection {
    DIR_UP,
    DIR_DOWN,
    DIR_LEFT,
    DIR_RIGHT
};

struct TFood {
    int y;
    int x;
};

struct TSnakeNode {
    int y;
    int x;
    struct TSnakeNode *front;
};

struct TSnake {
    int    length;
    struct TSnakeNode *head;
    enum   TDirection  dir;
};
int refreshgamew(WINDOW *win, struct TSnake *psnake);
void movesnake(struct TSnake *psnake);
int checksnake(struct TFood *pfood, struct TSnake *psnake);
void snakegrowup(struct TFood *pfood, struct TSnake *psnake);
void gameover(WINDOW *win, char *str);
struct TSnakeNode *newsnakenode(struct TSnakeNode **ppsnode, int y, int x);
WINDOW* newgamew();
struct TSnake* initsnake();
void destroysnake(struct TSnake *psnake);
void drawsnakew(WINDOW *win, struct TSnake *psnake);
void drawfoodw(WINDOW *win, struct TFood *pfood, struct TSnake *psnake);
TBool checkfood(struct TFood *pfood, struct TSnake *psnake);
WINDOW* newlogw();
void runlog(WINDOW *win, char *str);
void cleanline(WINDOW *win, int y, int x);
int main()
{
    initscr();  /* Initialize, enter ncurses mode */
    raw();      /* Disable line buffering, see results immediately */
    noecho();   /* Do not display control characters on the terminal, such as Ctrl+C */
    keypad(stdscr, TRUE);   /* Allow user to use keyboard in terminal */
    curs_set(0);    /* Set cursor visibility, 0 is invisible, 1 is visible, 2 is completely visible */
    refresh();      /* Write the contents of the virtual screen to the display and refresh */

    g_level = 1;

    INITRUNLOG();

    RUNLOG("  Press 'q' or 'Q' to quit.");
    RUNLOG("  Press 'w/s/a/d' or 'W/S/A/D' to move the snake.");
    RUNLOG("Info:");

    WINDOW *gwin = newgamew(); /* Create game window, implemented by a custom function called newgamew */
    struct TSnake *psnake = initsnake();
    drawsnakew(gwin, psnake);

    while (refreshgamew(gwin, psnake) >= 0)
        ;

    /* getch() is different from getchar() */
    getch();

    destroysnake(psnake);
    delwin(gwin);    /* Clear the game window and free the memory and information of the window data structure */
    DESTROYRUNLOG(); /* Clear the information display window */
    endwin();        /* Exit ncurses mode */

    return 0;
}
WINDOW* newlogw()
{
    /* Parameters are: height, width, starting position (y,x) of the window */
    WINDOW *win = newwin(LOGWIN_YLEN, LOGWIN_XLEN, GAMEWIN_YLEN + 2, 3);

    /* Parameters are: known window pointer, 0 and 0 are the default row and column starting positions of the characters */
    box(win, 0, 0);

    mvwprintw(win, 0, 2, " LOG ");
    wrefresh(win); // Refresh the specified window

    return win;
}

void runlog(WINDOW *win, char *str)
{
    static char logbuf[LOGBUF_NUM][LOGBUF_LEN] = {0};
    static int  index = 0;

    strcpy(logbuf[index], str);

    int i = 0;

    /* #define LOGBUF_NUM  (LOGWIN_YLEN-2); LOGBUF_NUM=5 */
    for (; i < LOGBUF_NUM; ++i) {

        /* Custom function, cleanline */
        cleanline(win, i+1, 1);

        /* Print string on each line */
        mvwprintw(win, i+1, 1, logbuf[(index+i) % LOGBUF_NUM]);
        wrefresh(win);
    }

    index = (index + LOGBUF_NUM - 1) % LOGBUF_NUM;
}

/* Clear the coordinates (x,y) of the window win */
void cleanline(WINDOW *win, int y, int x)
{
    char EMPTYLINE[LOGBUF_LEN] = {0}; // LOGBUF_LEN=57

    /* Set positions 0-56 of the array to empty characters */
    memset(EMPTYLINE, ' ', LOGBUF_LEN-1);

    /* Move the cursor to position (y,x) in the window win and print the string EMPTYLINE */
    mvwprintw(win, y, x, EMPTYLINE);

    /* Display content on the specified window */
    wrefresh(win);
}

struct TSnake* initsnake()
{
    struct TSnake *psnake = (struct TSnake *)malloc(sizeof(struct TSnake));

    psnake->dir    = DIR_LEFT;
    psnake->length = 4; // Initialize the length of the snake to 4

    newsnakenode (
        &newsnakenode (
            &newsnakenode (
                &newsnakenode( &psnake->head, 4, 50 )->front, 4, 53
            )->front, 4, 52
        )->front, 4, 51
    )->front = psnake->head;

    return psnake;
}

struct TSnakeNode *newsnakenode(struct TSnakeNode **ppsnode, int y, int x)
{
    *ppsnode = (struct TSnakeNode *)malloc(sizeof(struct TSnakeNode));
    (*ppsnode)->y = y;
    (*ppsnode)->x = x;
    (*ppsnode)->front = NULL;

    return *ppsnode;
}

void drawsnakew(WINDOW *win, struct TSnake *psnake)
{
    static int taily = 0;
    static int tailx = 0;
    if (taily != 0 && tailx != 0) {
        mvwaddch(win, taily, tailx, ' ');
    }

    /* #define GetSnakeTail(s)  ((s)->head->front) */
    struct TSnakeNode *psnode = GetSnakeTail(psnake);

    int i = 0;
    for (; i < psnake->length; ++i) {
        mvwaddch(win, psnode->y, psnode->x, SHAPE_SNAKE);
        psnode = psnode->front;
    }

    taily = GetSnakeTail(psnake)->y;
    tailx = GetSnakeTail(psnake)->x;

    wrefresh(win);
}

int refreshgamew(WINDOW *win, struct TSnake *psnake)
{
    static TBool ffood = False;
    struct TFood pfood;
    /* When starting the game or when food is eaten, ffood=False, and drawfoodw is executed to redraw the food */
    if (!ffood) {
        drawfoodw(win, &pfood, psnake);
        ffood = True;
    }
    int key = -1;

    fd_set set;
    FD_ZERO(&set);
    FD_SET(0, &set);

    struct timeval timeout;
    timeout.tv_sec = 0;
    timeout.tv_usec= (6 - (int)(g_level/3)) * 100*1000;

    // Next, we will use the select kernel API, which will listen for a series of keyboard and mouse inputs. We use `key=getch()` and `switch` to determine the input type. The second `switch` is used to display the level and the current movement speed of the snake.
    if (select(1, &set, NULL, NULL, &timeout) < 0)
        return -1;

    if (FD_ISSET(0, &set)) {
        while ((key = getch()) == -1);

        switch (key) {
        case 'w':
        case 'W':
            (psnake->dir == DIR_DOWN) ? : (psnake->dir = DIR_UP);
            break;

        case 's':
        case 'S':
            (psnake->dir == DIR_UP) ? : (psnake->dir = DIR_DOWN);
            break;

        case 'a':
        case 'A':
            (psnake->dir == DIR_RIGHT) ? : (psnake->dir = DIR_LEFT);
            break;

        case 'd':
        case 'D':
            (psnake->dir == DIR_LEFT) ? : (psnake->dir = DIR_RIGHT);
            break;

        case 'q':
        case 'Q':
            RUNLOG("Quit Game!");
            gameover(win, "Quit Game!");
            return -1;

        default:
            break;
        }
    }
    movesnake(psnake);
    drawsnakew(win, psnake);
    switch (checksnake(&pfood, psnake)) {
    case 0:
        break;

    // Food has been eaten, set ffood to 0 to redraw the food.
    case 1:
        ffood = False;
        if (++g_level > MAXLEVEL) {
            RUNLOG("Win!!!");
            gameover(win, "Win!!!");
            return -1;
        }
        mvwprintw(win, GAMEWIN_YLEN-1, 2, " Level: %d ", g_level);
        mvwprintw(win, GAMEWIN_YLEN-1, 30, " Speed: %d ", (int)(g_level/3));
        wrefresh(win);
        RUNLOG("Level UP!");
        snakegrowup(&pfood, psnake);
        break;

    default:
        RUNLOG("Game over!");
        gameover(win, "Game over!");
        return -1;
    }

    return 1;
}


/* The structure TSnake is an inverted linked list with the head and tail connected.
 * Example: [a]<-[b]<-[c]<-[d]    a is the head
 *          |              ^     When the snake moves, only the head points to d,
 *          `--------------'     and the (y,x) of d is modified to the position where the head moves to. */
void movesnake(struct TSnake *psnake)
{
    int hy = psnake->head->y;
    int hx = psnake->head->x;

    psnake->head = GetSnakeTail(psnake);

    switch (psnake->dir) {
    case DIR_UP:
        psnake->head->y = hy - 1;
        psnake->head->x = hx;
        break;

    case DIR_DOWN:
        psnake->head->y = hy + 1;
        psnake->head->x = hx;


        break;

    case DIR_LEFT:
        psnake->head->y = hy;
        psnake->head->x = hx - 1;
        break;

    case DIR_RIGHT:
        psnake->head->y = hy;
        psnake->head->x = hx + 1;
        break;

    default:
        break;
    }
}

void snakegrowup(struct TFood *pfood, struct TSnake *psnake)
{
    // Allocate memory for a new snake node (struct TSnakeNode) and assign the pointer pnode to the new node. This new node will become the new head of the snake.
    struct TSnakeNode *pnode = (struct TSnakeNode *)malloc(sizeof(struct TSnakeNode));

    switch (psnake->dir) {
    case DIR_UP:
        pnode->y = psnake->head->y - 1;
        pnode->x = psnake->head->x;
        break;

    case DIR_DOWN:
        pnode->y = psnake->head->y + 1;
        pnode->x = psnake->head->x;
        break;

    case DIR_LEFT:
        pnode->y = psnake->head->y;
        pnode->x = psnake->head->x - 1;
        break;

    case DIR_RIGHT:
        pnode->y = psnake->head->y;
        pnode->x = psnake->head->x + 1;
        break;

    default:
        break;
    }

    // Set the front pointer of the new node (pnode) to the current snake tail in order to establish a connection between the new head and tail.
    pnode->front = GetSnakeTail(psnake);

    // Set the front pointer of the current snake head to the new node to ensure that the new node becomes the new head.
    psnake->head->front = pnode;
    psnake->head = pnode;

    // Increase the length of the snake to indicate that the snake body has extended by one unit.
    ++psnake->length;
}

void drawfoodw(WINDOW *win, struct TFood *pfood, struct TSnake *psnake)
{
    do {
        pfood->y = random() % (GAMEWIN_YLEN - 2) + 1;
        pfood->x = random() % (GAMEWIN_XLEN - 2) + 1;


    } while (False == checkfood(pfood, psnake));
    checkfood(pfood, psnake);

    mvwaddch(win, pfood->y, pfood->x, SHAPE_FOOD);
    wrefresh(win);
}

TBool checkfood(struct TFood *pfood, struct TSnake *psnake)
{
    struct TSnakeNode *pnode = GetSnakeTail(psnake);

    int i = 0;
    for (; i < psnake->length; ++i, pnode = pnode->front)
        if (pfood->y == pnode->y && pfood->x == pnode->x)
            return False;

    return True;
}


int checksnake(struct TFood *pfood, struct TSnake *psnake)
{

	/* Check if the coordinates of the snake's head have collided with the game borders on the top, bottom, left, or right */
    if ( psnake->head->y <= 0 || psnake->head->y >= GAMEWIN_YLEN
      || psnake->head->x <= 0 || psnake->head->x >= GAMEWIN_XLEN)
    {
        return -1;
    }

    struct TSnakeNode *pnode = GetSnakeTail(psnake);
    int i = 0;

	/* Check that the snake's head does not collide with any part of its body */
    for (; i < psnake->length - 1; ++i, pnode = pnode->front)
        if (psnake->head->y == pnode->y && psnake->head->x == pnode->x)
            return -1;

  	/* Of course, colliding with food is allowed */
    if (psnake->head->y == pfood->y && psnake->head->x == pfood->x)
        return 1;

    return 0; // No collision occurred
}

void gameover(WINDOW *win, char *str)
{
    mvwprintw(win, (int)(GAMEWIN_YLEN/2), (GAMEWIN_XLEN/2 - strlen(str)/2), str);
    mvwprintw(win, (int)(GAMEWIN_YLEN/2 + 1), 20, "Press any key to quit...");
    wrefresh(win);
}


void destroysnake(struct TSnake *psnake)
{
    struct TSnakeNode *psnode = GetSnakeTail(psnake);
    struct TSnakeNode *ptmp   = NULL;

    int i = 0;
    for (; i < psnake->length; ++i) {
        ptmp   = psnode;
        psnode = psnode->front;
        free(ptmp);
    }

    free(psnake);
    psnake = NULL;
}
