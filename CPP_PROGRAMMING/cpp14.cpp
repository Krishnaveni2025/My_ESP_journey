#include <iostream>
using namespace std;

class Sensor {
public:
    // your code here: implement void readValue() to print "Reading sensor value"
    void readValue()
    {
        cout<<"Reading sensor value"<<endl;
    }
};

class Logger {
public:
    // your code here: implement void logData() to print "Logging data"
    void logData()
    {
        cout<<"Logging data"<<endl;
    }
};

// your code here: define class SmartSensor inheriting publicly from Sensor and Logger
// implement process() to call both readValue() and logData()
class SmartSensor : public Sensor, public Logger{
    public:
    void process()
    {
        readValue();
        logData();
    }
};
int main() {
    SmartSensor ss;
    ss.process();
    return 0;
}
