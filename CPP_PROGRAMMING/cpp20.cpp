#include <iostream>
using namespace std;

// Base driver class
class BaseDriver {
private:
    int privateValue;

protected:
    int protectedValue;

public:
    int publicValue;

    BaseDriver(int val1, int val2, int val3)
        : privateValue(val1), protectedValue(val2), publicValue(val3) {
    }

    void function1(){
        cout << "function1 privateValue = " << privateValue << endl;
        cout << "function1 protectedValue = " << protectedValue << endl;
        cout << "function1 publicValue = " << publicValue << endl;
    }
};

// Derived driver class
class DerivedDriver : public BaseDriver {
public:
    DerivedDriver(int val1, int val2, int val3)
        : BaseDriver(val1, val2, val3) {
    }

    void function2(){
        //cout << "function2 privateValue = " << privateValue << endl;
        cout << "function2 protectedValue = " << protectedValue << endl;
        cout << "function2 publicValue = " << publicValue << endl;
    }
};

int main() {
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;

    DerivedDriver driver(val1, val2, val3);
    driver.function1();
    driver.function2();

    //cout << "main() privateValue = " << driver.privateValue << endl;
    //cout << "main() protectedValue = " << driver.protectedValue << endl;
    cout << "main() publicValue = " << driver.publicValue << endl;

    return 0;
}
