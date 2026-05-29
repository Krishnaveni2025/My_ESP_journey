#include <iostream>
using namespace std;

// your code here: declare and define printValue(int)
void printValue(int v)
{
    cout<<"Value="<<v;
}
// your code here: declare and define printValue(float)
void printValue(float v)
{
    cout<<"Value="<<v;
}
int main() {
   float val;
   cin >> val;
   if (val == (int)val) {
       printValue((int)val); // int version
   } else {
       printValue(val);      // float version
   }
   return 0;
}
