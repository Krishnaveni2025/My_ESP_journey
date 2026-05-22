#include<iostream>
using namespace std;
class Item{
    private:
        static int value;
    public:
        static int fun()//static member function does not need an object to call
        {
            return value;
        }
};
int Item :: value{10};
int main()
{
    Item i;
    cout<<i.fun();
    return 0;
}