#include <iostream>
using namespace std;

class PowerControl {
public:
    void enable() {
        cout << "Power enabled" << endl;
    }
};

class InterruptControl {
public:
    void enable() {
        cout << "Interrupt enabled" << endl;
    }
};

// Multiple inheritance
class SpiDriver : public PowerControl, public InterruptControl {
};

int main() {
    int mode;
    cin >> mode;

    SpiDriver spi;

    // TODO:
    // Fix ambiguity and call correct enable() based on mode
    if(mode == 1)
            spi.InterruptControl::enable();
    else
            spi.PowerControl::enable();
    return 0;
}
