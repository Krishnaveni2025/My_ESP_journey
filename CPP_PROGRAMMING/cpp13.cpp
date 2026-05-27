#include <iostream>
using namespace std;

class Device {
public:
    void showType() {
        cout << "Generic Device\n";
    }
};

// your code here: define class Actuator with private inheritance from Device
// implement showActuator() that calls showType() and then prints "Actuator Device"
class Actuator: private Device{
    public:
        void showActuator()
        {
            showType();
            cout<<"Actuator Device";
        }
};
int main() {
    Actuator a;
    a.showActuator();  // should print both lines
    return 0;
}
