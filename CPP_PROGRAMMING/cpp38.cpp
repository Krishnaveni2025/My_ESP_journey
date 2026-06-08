#include <iostream>
using namespace std;

// Define SensorBuffer class here
// <write your code>
class SensorBuffer{
    int id;
    int data[5];
    int count;
    public:
        SensorBuffer(int val){
            id = val;
            count = 0;
        }
        void addSample(int v){
            if(count != 5)
            {
                data[count] = v;
                count++; 
            }
        }
        int size(){
            return count;
        }
        void print(){
            if(count)
            {
                for(int i = 0; i<count; i++)
                {
                    cout<<data[i]<<" ";
                }
            }
        }
};
int main() {
    int id, n;
    cin >> id >> n;

    SensorBuffer buf(id);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        buf.addSample(x);
    }

    buf.print();
    return 0;
}
