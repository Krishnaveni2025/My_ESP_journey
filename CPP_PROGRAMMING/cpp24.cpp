#include <iostream>
using namespace std;

// Shared base
class DeviceCore {
public:
    DeviceCore(int id) : deviceId(id) {
        cout << "Device core initialized" << endl;
    }

    int getId() const {
        return deviceId;
    }

private:
    int deviceId;
};

// Communication layer
class CommLayer : virtual public DeviceCore {
public:
    CommLayer(int id) : DeviceCore(id) {}
};

// Power layer
class PowerLayer : virtual public DeviceCore {
public:
    PowerLayer(int id) : DeviceCore(id) {}
};

// Diamond inheritance
class SensorDriver : public CommLayer, public PowerLayer {
public:
    SensorDriver(int id)
        : DeviceCore(id), CommLayer(id), PowerLayer(id) {}

    void printId() const {
        cout << "Device ID " << getId() << endl;
    }
};

int main() {
    int id;
    cin >> id;

    SensorDriver sensor(id);
    sensor.printId();

    return 0;
}
