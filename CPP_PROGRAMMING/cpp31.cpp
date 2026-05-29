#include <iostream>
using namespace std;
 
// Write your function here
void initUART(int b, char p = 'N', int s = 1)
{
    cout<<b<<" "<<p<<" "<<s;
} 
int main() {
    int baud, mode;
    cin >> baud >> mode;
 
    if (mode == 0) {
        // use all default values
        initUART(baud);
    } else if (mode == 1) {
        char parity;
        cin >> parity;
        initUART(baud, parity);
    } else if (mode == 2) {
        char parity;
        int stopBits;
        cin >> parity >> stopBits;
        initUART(baud, parity, stopBits);
    }
 
    return 0;
}
