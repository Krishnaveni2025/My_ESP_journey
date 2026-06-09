#include <iostream>
#include <cstdint>
using namespace std;

// Write your code here
void compute(int16_t a, int16_t b, int32_t& s, int32_t& p) {
    // Write your code here
    s = a+b;
    p = a*b;
}

int main() {
    int16_t a, b;
    cin >> a >> b;

    int32_t sum = 0, product = 0;

    compute(a, b, sum, product);

    cout << sum << " " << product;

    return 0;
}
