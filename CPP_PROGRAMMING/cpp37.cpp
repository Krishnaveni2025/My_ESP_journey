#include <iostream>
using namespace std;

//Write your code here
inline int saturate(int val, int min, int max)
{
    if(val<min)
            return min;
    else if(val > max)
            return max;
    else
            return val;
}
int main() {
    int value, minVal, maxVal;
    cin >> value >> minVal >> maxVal;

    cout << saturate(value, minVal, maxVal);

    return 0;
}
