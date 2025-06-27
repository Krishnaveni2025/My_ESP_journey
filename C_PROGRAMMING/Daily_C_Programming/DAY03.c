
//what is the output of the program
/*1:
#include <stdio.h>
    int main()
    {
        char *p = NULL;
        char *q = 0;
        if (p)//fslse 
            printf(" p ");
        else
            printf("nullp");
        if (q)//flase '0'
            printf("q\n");
        else
            printf(" nullq\n");
    }

//Question 2:

#include <stdio.h>
void solve() {
    char ch[10] = "abcdefghij";
    int ans = 0;
    for(int i = 0; i < 10; i++) {//01
        ans += (ch[i] - 'a');//97-97=0 98-97=1 99-97=2...9
        //0+0 0+1 1+2..................36
        //0    1  3....................45
    }
    printf("%d", ans);//0 0+1 1+2 3+3 6+4 10+5 15+6 21+7 28+8 36+9
}
int main() {
    solve();
	return 0;
}
#include<stdio.h>
int main()
{
    char d;
    d = 'a';//to know the ascii value of 'a'
    printf("%d",d);
}
//Question 3:
#include <stdio.h>
struct School {
    int age, rollNo;
};
void solve() {
    struct School sc;
    sc.age = 19;
    sc.rollNo = 82;
    printf("%d %d", sc.age, sc.rollNo);//19 82
}
int main() {
    solve();
	return 0;
}

//Question 4:
#include <stdio.h>
void solve() {
    int a[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for(int i = 0; i < 5; i++) {//0 1 2 3 4 5
        if(i % 2 == 0) //t f t f t f
        {
            sum += *(a + i);//0+1   -1+3 -2+5
           // printf("%d\n", sum);//1    2    3
        }
        else 
        {
            sum -= *(a + i);//1-2=-1  2-4=-2  
           // printf("%d\n", sum);
        }
    }
    printf("%d", sum);//3
}
int main() {
	solve();
	return 0;
}*/

//Question 6:
#include <stdio.h>
#define CUBE(x) x * x * x//3*3*3
void solve() {
    int ans = 216 / CUBE(3);//(216*/3*3*3)
    printf("%d", ans);//648
}
int main() {
    solve();
	return 0;
}
