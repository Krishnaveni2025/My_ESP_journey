#include <iostream>
using namespace std;

// TODO 1: Create a base driver class
//         - Constructor prints "Base driver initialized"
//         - Destructor prints "Base driver destroyed"
class Base{
    public:
        Base(){
            cout<<"Base driver initialized"<<endl;
        }
        ~Base(){
            cout<<"Base driver destroyed"<<endl;
        }
};
// TODO 2: Create a derived driver class that inherits from base driver
//         - Constructor prints "Derived driver initialized"
//         - Destructor prints "Derived driver destroyed"
class Derived: public Base{
    public:
        Derived(){
            cout<<"Derived driver initialized"<<endl;
        }
        ~Derived(){
            cout<<"Derived driver destroyed"<<endl;
        }
};
int main() {
    int value;
    cin >> value;

    // TODO 3: Create a derived driver object
    Derived obj;
    return 0;
}
