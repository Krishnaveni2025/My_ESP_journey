#include <iostream>
using namespace std;

// TODO 1: Create BaseDriver class
//         - Add function initBase()
//         - Prints base initialization messages
class BaseDriver{
    public:
        void initBase()
        {
            cout<<"Base driver init start\nBase driver init complete"<<endl;
        }
};
// TODO 2: Create SpiDriver class
//         - Inherits publicly from BaseDriver
//         - Add function initSpi()
//         - Calls initBase()
//         - Prints "SPI driver initialized"
class SpiDriver: public BaseDriver{
    public:
        void initSpi()
        {
            initBase();
            cout<<"SPI driver initialized"<<endl;
        }
};
// TODO 3: Create I2cDriver class
//         - Inherits publicly from BaseDriver
//         - Add function initI2c()
//         - Calls initBase()
//         - Prints "I2C driver initialized"
class I2cDriver: public BaseDriver{
    public:
        void initI2c()
        {
            initBase();
            cout<<"I2C driver initialized"<<endl;
        }
};
int main() {
    int mode;
    cin >> mode;

    // TODO 4: If mode == 0, create SpiDriver and call initSpi()
    if(mode==0){
            SpiDriver obj;
            obj.initSpi();
        }
    // TODO 5: If mode == 1, create I2cDriver and call initI2c()
    else{
        I2cDriver obj;
        obj.initI2c();
    }
    return 0;
}
