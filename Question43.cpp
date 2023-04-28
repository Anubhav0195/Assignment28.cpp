#include<iostream>
using namespace std;
class Array
{
    int a[100];
    const int size=100;
    public:
     Array()
     {

     }
     void setarray(int n,int index)
     {
        a[index]=n;

     }
     void display(int index)
     {
        cout<<a[index]<<endl;
     }
     int operator[](int index)
     {
        if(index >size)
        {
            cout<<"Array index out of bound Exception"<<endl;
            exit(0);
        }
        return a[index];
     }

};
int main()
{
    Array a1;
    a1.setarray(5,10);
    a1.display(10);
    cout<<a1[150];
}