#include <iostream>
using namespace std;

// Write your inline function here
inline int togglePin(int state)
{
    return (state^1);
}
int main() {
    int state[10];

    for (int i = 0; i < 10; i++) {
        cin >> state[i];
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int pin;
        cin >> pin;
        state[pin] = togglePin(state[pin]);
    }

    for (int i = 0; i < 10; i++) {
        cout << state[i];
        if (i < 9) cout << " ";
    }

    return 0;
}
