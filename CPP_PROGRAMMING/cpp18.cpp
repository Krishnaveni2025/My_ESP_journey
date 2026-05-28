#include <iostream>
using namespace std;

// TODO 1: Create a base driver class with a constructor
//         that prints "Base driver initialized"
class Base{
    public:
        Base(){
            cout<<"Base driver initialized"<<endl;
        }
};
// TODO 2: Create a derived driver class that inherits from the base driver
//         - Constructor takes an int value
//         - Prints "Derived driver initialized"
//         - Stores the value
//         - Has a function to print "Driver value <value>"
class Derived: public Base{
    public:
    int val;
        Derived(int v){
            cout<<"Derived driver initialized"<<endl;
            val = v;
        }
        void display(){
            cout<<"Driver value "<<val<<endl;
        }
};
int main() {
    int value;
    cin >> value;

    // TODO 3: Create a derived driver object using value
    Derived obj(value);
    // TODO 4: Call function to print the value
    obj.display();
    return 0;
}
