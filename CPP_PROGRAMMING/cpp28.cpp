#include <iostream>
#include <string>
#include <cstdint>
#include <cstddef>

using namespace std;

// Write your overloaded functions here
void write(uint8_t b)
{
    cout<<static_cast<unsigned int>(b);
}
void write(const string& b)
{
    cout<<b;
}
void write(const uint8_t* b, size_t s)
{
    for(size_t i = 0; i<s; i++)
    {
        cout<<static_cast<unsigned int>(b[i]);
        if(i + 1 < s){
            cout<<" ";
        }
    }
}
int main() {
    int mode;
    cin >> mode;

    if (mode == 1) {
        unsigned int byteValue;
        cin >> byteValue;
        write(static_cast<uint8_t>(byteValue));
    }
    else if (mode == 2) {
        string s;
        cin >> s;
        write(s);
    }
    else if (mode == 3) {
        int n;
        cin >> n;

        uint8_t buffer[100];
        for (int i = 0; i < n; i++) {
            unsigned int temp;
            cin >> temp;
            buffer[i] = static_cast<uint8_t>(temp);
        }
        write(buffer, static_cast<size_t>(n));
    }

    return 0;
}
