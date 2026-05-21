#include <iostream>
class Student{
    private:
        int rollno;
        float marks;
    public:
        void putData(int a, float b)
        {
            rollno = a;
            marks = b;
        }
        void display()
        {
           std::cout<<"Roll Number: "<<rollno<<"\n";
           std::cout<<"Marks: "<<marks;
        }
};
int main()
{
    Student s1;
    s1.putData(100,55.5);
    s1.display();
    return 0;
}
