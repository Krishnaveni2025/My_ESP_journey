#include <iostream>
using namespace std;

// Write your function here
void setPWM(int d, int f=1000, int dt = 0)
{
    cout<<d<<" "<<f<<" "<<dt;
}
int main() {
    int duty, mode;
    cin >> duty >> mode;

    if (mode == 0) {
        setPWM(duty);
    }
    else if (mode == 1) {
        int frequency;
        cin >> frequency;
        setPWM(duty, frequency);
    }
    else if (mode == 2) {
        int frequency, deadtime;
        cin >> frequency >> deadtime;
        setPWM(duty, frequency, deadtime);
    }

    return 0;
}
