#include <iostream>
using namespace std;

// your code here: define macro SQUARE(x)
#define SQUARE(x) (x*x)
// your code here: define inline function square(int x)
inline int square(int x)
{
    return (x*x);
}
int main() {
    int n;
    cin >> n;

    cout << "Macro Square: " << SQUARE(n) << "\n";
    cout << "Inline Square: " << square(n) << "\n";

    return 0;
}
