#include <iostream>
using namespace std;

// your code here: declare and define setThreshold(int)
void setThreshold(int st)
{
    cout<<"Threshold set to "<<st;
}
// your code here: declare and define setThreshold(double)
void setThreshold(double st)
{
    cout<<"Threshold set to "<<st;
}
int main() {
   double val;
   cin >> val;
   if (val == (int)val) {
       setThreshold((int)val); // int version
   } else {
       setThreshold(val);      // double version
   }
   return 0;
}
