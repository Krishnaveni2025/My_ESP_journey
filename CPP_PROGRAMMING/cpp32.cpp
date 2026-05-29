#include <iostream>
#include <string>
using namespace std;

// Write your enum and function here
enum FilterMode{
    NONE,
    LOW,
    HIGH
};
int readSensor(int r, FilterMode mode= NONE)
{
    if(mode == NONE)
            return r;
    if(mode == LOW)
            return (r/2);
    return (r/4);
}
int main() {
    int raw, modeFlag;
    cin >> raw >> modeFlag;

    if (modeFlag == 0) {
        cout << readSensor(raw);
    } else {
        string filterName;
        cin >> filterName;

        FilterMode filter;

        if (filterName == "LOW") {
            filter = LOW;
        } else {
            filter = HIGH;
        }

        cout << readSensor(raw, filter);
    }

    return 0;
}
