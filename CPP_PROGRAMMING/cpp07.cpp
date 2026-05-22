#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int  age;
    public:
        void setData(string n, int a){
            name = n;
            age = a;
        }
        void display(){
            cout<<"Name: "<<name<<",Age: "<<age<<endl;
        }
};
int main()
{
    Student s[2];
    s[0].setData("Krish", 64);
    s[1].setData("Veni", 32);
    for(int i = 0; i<2; i++){
        s[i].display();
    }
    return 0;
}