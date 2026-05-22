#include<iostream>
using namespace std;
class Item{
    private:
        static int value;
    public:
        static int fun();
};
int Item::fun()
{
    return value;
}
int Item::value{100};
int main()
{
    cout<<Item::fun();
    return 0;
}