#include <iostream>
#include <string>
using namespace std;

// Write your function here
void logMessage(string m, bool b= 0)
{
    if(b==1)
    {
        cout<<"[123456] "<<m;
    }
    else
    {
        cout<<m;
    }
}
int main() {
    int mode;
    string msg;
    cin >> mode >> msg;

    if (mode == 0) {
        logMessage(msg);            // use default argument
    } else {
        logMessage(msg, true);      // enable timestamp
    }

    return 0;
}
