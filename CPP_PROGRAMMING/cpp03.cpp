#include<iostream>
using namespace std;
class  Student
{
public:
    int normalcount = 0;
    static int staticcount;//declaration of static member "inside class"
    Student(){
        normalcount++;
        staticcount++;
    }
};

int Student:: staticcount = 0; //definition of static data member "outside class" DataType className:: varName;
int main()
{
    Student s1, s2, s3;
    cout<<"s1.normalcount="<<s1.normalcount<<endl;
    cout<<"s2.normalcount="<<s2.normalcount<<endl;
    cout<<"s3.normalcount="<<s3.normalcount<<endl;
    cout<<"static count ="<<Student::staticcount<<endl;//accessing static data members className::varName
    return 0;
}
