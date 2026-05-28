#include <iostream>
using namespace std;

// Base driver class
class BaseDriver {
public:
    void configure(int value) {
        cout << "Base configuration value " << value << endl;
    }
};

// Derived driver class
class DerivedDriver : public BaseDriver {
public:
    void configure() {
        cout << "Derived default configuration" << endl;
    }
};

int main() {
    int value;
    cin >> value;

    DerivedDriver driver;

    // TODO 1: Call derived configure()
    driver.configure();
    // TODO 2: Call base configure(int) through derived object
    driver.BaseDriver::configure(value);
    return 0;
}
