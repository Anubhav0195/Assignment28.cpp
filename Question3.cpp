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
        if(index>=size)
        {
            cout<<"Array index out of bound Expextation"<<endl;
            exit (0);
        }
        else
        a[index]=n;
     }
     void display(int index)
     {
        cout<<a[index]<<endl;
     }
     int operator[](int index)
     {
        if(index>=size)
        {
            cout<<"Array index out of bound expectation"<<endl;
            exit(0);
        }
        return a[index];
     }

};
int main()
{
    Array b;
    b.setarray(5,23);
    //b.display(90);
    cout<<b[23];
    return 0;


}