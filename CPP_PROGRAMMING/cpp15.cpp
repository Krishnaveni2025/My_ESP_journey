#include <iostream>
using namespace std;

// TODO 1: Create CoreDriver class
//         - Constructor prints "Core driver initialized"
class CoreDriver{
    public:
    CoreDriver(){
        cout<<"Core driver initialized"<<endl;
    }
};
// TODO 2: Create CommDriver class
//         - Publicly inherits from CoreDriver
//         - Constructor prints "Comm driver initialized"
class CommDriver: public CoreDriver{
    public:
    CommDriver(){
        cout<<"Comm driver initialized"<<endl;
    }
};
// TODO 3: Create SpiDriver class
//         - Publicly inherits from CommDriver
//         - Constructor takes int speed
//         - Prints "SPI driver initialized"
//         - Stores speed
//         - Function prints "SPI speed <speed>"
class SpiDriver: public CommDriver{
    int k;
    public:
        SpiDriver(){
            cout<<"SPI driver initialized"<<endl;
        }
        void Sspeed(int sp)
        {
            k = sp;
            cout<<"SPI speed "<<k<<endl;
        }
};
int main() {
    int speed;
    cin >> speed;

    // TODO 4: Create SpiDriver object
    SpiDriver s;
    // TODO 5: Call function to print SPI speed
    s.Sspeed(speed);
    return 0;
}
