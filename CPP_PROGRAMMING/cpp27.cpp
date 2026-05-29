#include <iostream>
using namespace std;
 
// Write your code here
float readTemp(int r)
{
    return (r/10.0f);
}
float readTemp(int r, char u)
{
    if(u=='C')
        return (r/10.0f);
    else
        return (((r/10.0f)*1.8)+32.0f);
}
int main() {
    int raw;
    char unit;
    cin >> raw >> unit;
 
    if (unit == 'D') {
        cout << readTemp(raw);
    } else {
        cout << readTemp(raw, unit);
    }
 
    return 0;
}
