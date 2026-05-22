#include<iostream>
using namespace std;
class Calculator{
    private:
        int square(int n)
        {
            return n*n;
        }
    public:
        void showSquare(int x)
        {
            cout<<"Square of "<<x<<" is "<<square(x);
        }
};
int main()
{
    Calculator calc;
    calc.showSquare(5);
}