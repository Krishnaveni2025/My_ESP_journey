#include<iostream>
using namespace std;
class Student{
      private:
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
  cout<<"Roll No: "<<rollno<<"\n";
  cout<<"Marks: "<<marks;
}
int main()
{
  Student s1;//creating object
  s1.putdata(101, 75);//accessing member functions
  s1.display();
  return 0;
}
