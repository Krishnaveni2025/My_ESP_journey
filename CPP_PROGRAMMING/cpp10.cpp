#include<iostream>
using namespace std;
class Base{
    private:
        int a{10};
    public:
        int b{20};
    protected:
        int c{30};
};
class Derived: public Base{
    public:
        void display()
        {
            cout<<b<<" "<<c<<endl;
        }
};
int main()
{
    Base obj;
    //cout<<obj.a;//error
    cout<<obj.b<<endl;
    //cout<<obj.c;//error
    Derived obj2;
    obj2.display();
    return 0;
}