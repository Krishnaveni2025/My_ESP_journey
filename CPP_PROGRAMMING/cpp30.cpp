#include <iostream>
using namespace std;

// Write your function here
int configureTimer(int f, int p=1)
{
    return (f/p);
}
int main() {
    int frequency, mode;
    cin >> frequency >> mode;

    if (mode == 0) {
        cout << configureTimer(frequency);
    } else {
        int prescaler;
        cin >> prescaler;
        cout << configureTimer(frequency, prescaler);
    }

    return 0;
}
