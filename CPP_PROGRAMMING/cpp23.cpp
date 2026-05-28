#include <iostream>
using namespace std;

// Base driver class
class BaseDriver {
public:
    BaseDriver(int v) : baseConfig(v) {}

    void printBase() const {
        cout << "Base config " << baseConfig << endl;
    }

protected:
    int baseConfig;
};

// Derived driver class
class DerivedDriver : public BaseDriver {
public:
    DerivedDriver(int b, int d) : BaseDriver(b), derivedConfig(d) {}

    void printDerived() const {
        cout << "Derived config " << derivedConfig << endl;
    }

private:
    int derivedConfig;
};

// Driver processing function
void processDriver(const BaseDriver& driver) {
    driver.printBase();
}

// TODO:
// Modify or extend the program so derived configuration is also printed
void processDriver(const DerivedDriver& driver){
    driver.printBase();
    driver.printDerived();
}
int main() {
    int baseVal, derivedVal;
    cin >> baseVal >> derivedVal;

    DerivedDriver driver(baseVal, derivedVal);

    // TODO: Call processDriver so both configs print
    processDriver(driver);
    return 0;
}
