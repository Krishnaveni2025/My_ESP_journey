#include <iostream>
using namespace std;

class Device {
public:
    void showType() {
        cout << "Generic Device\n";
    }
};

// your code here: define class Sensor with protected inheritance from Device
// implement showSensor() that calls showType() and then prints "Sensor Device"
class Sensor: protected Device{
    public:
        void showSensor(){
            showType();
            cout<<"Sensor Device";
        }
};
int main() {
    Sensor s;
    s.showSensor();  // should print both lines
    return 0;
}
