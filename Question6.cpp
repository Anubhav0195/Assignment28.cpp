#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
     void setdata(int r,int i)
     {
        real=r;
        img=i;
     }
     void display()
     {
        cout<<"real="<<real<<"+"<<"img"<<img<<endl;
     }
     Complex &operator=(Complex &c)
     {
        real =c.real;
        img =c.img;
        return c;

     }

};
int main()
{
    Complex c1;
    c1.setdata(6,7);
    Complex c2;
    c2.setdata(8,9);
    Complex c3;
    c3=c1=c2;
    c3.display();
    return 0;
    
    
}