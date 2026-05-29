#include <iostream>

// Write your two overloaded process() functions here
void process(const int &x)
{
    std::cout<<"readonly";
}
void process(int& x)
{
    x = x*2;
}
int main() {
    int x;
    std::cin >> x;

    if (x < 0) {
        process(static_cast<const int&>(x));   // call read-only overload
    } else {
        process(x);                            // call modifying overload
        std::cout << x;
    }

    return 0;
}
