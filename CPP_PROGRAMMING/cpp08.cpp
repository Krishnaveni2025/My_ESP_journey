#include<iostream>
using namespace std;
class Student{//all data members of a class are private by default
        int rollno;
        float marks;
    public:
        void putdata(int a, float b);
        void display();
};
//Defining class members outside the class using :: resoultion operator
void Student::putdata(int a, float b)
{
  rollno = a;//accessing private members through public member functions
  marks = b;
}
void Student::display(){
  cout<<"Roll No: "<<rollno;
  cout<<" Marks: "<<marks<<endl;
}
void modify(Student s, int r, float m){
    s.putdata(r, m);
    s.display();
}
int main()
{
    Student s1;
    s1.putdata(100, 98.03);
    cout<<"Before Call: ";
    s1.display();
    modify(s1, 111, 102.98);
    cout<<"After Call: ";
    s1.display();//changes made does not effect here
    return 0;
}