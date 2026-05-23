#include<iostream>
using namespace std;
class Animal{
    public:
        void sleep()
        {
            cout<<"This Animal Sleeps\n";
        }
        void eat()
        {
            cout<<"This Animal Eats\n";
        }
};
class Dog : public Animal{
    public:
        void bark()
        {
            cout<<"This Animal Barks\n";
        }
};
class Cat : public Animal{
    public:
        void meow()
        {
            cout<<"This Animal Meows\n";
        }
};
int main()
{
    Dog d;
    Cat c;
    cout<<"Dog Behaviour:\n";
    d.eat();
    d.sleep();
    d.bark();
    cout<<"Cat Behaviour:\n";
    c.eat();
    c.sleep();
    c.meow();
    return 0;
}