#include <iostream>
using namespace std;

class Device {
public:
    // your code here: implement void show() to print "Generic Device"
    void show(){
        cout<<"Generic Device"<<endl;
    }
};

class Sensor : virtual public Device {
    // no extra code needed
};

class Actuator : virtual public Device {
    // no extra code needed
};

// your code here: define class SmartDevice inheriting publicly from Sensor and Actuator
// implement void identify() to print "Smart Device"
class SmartDevice:public Sensor, public Actuator{
    public:
        void identify(){
            cout<<"Smart Device"<<endl;
        }
};
int main() {
    SmartDevice sd;
    sd.show();      // from Device
    sd.identify();  // from SmartDevice
    return 0;
}
