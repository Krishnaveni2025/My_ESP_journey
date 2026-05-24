#include <iostream>
using namespace std;

class Vehicle {
public:
    // your code here: implement void printCategory() to print "Generic Vehicle"
    void printCategory(){
        cout<<"Generic Vehicle\n";
    }
};

// your code here: define class Car inheriting publicly from Vehicle
// implement void printCar() to print "Car Vehicle"
class Car : public Vehicle{
    public:
        void printCar(){
            cout<<"Car Vehicle\n";
        }
};
int main() {
    Car c;
    c.printCategory(); // inherited method
    c.printCar();      // derived method
    return 0;
}
