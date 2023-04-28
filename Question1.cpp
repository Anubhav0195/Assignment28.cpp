#include<iostream>
using namespace std;
class Complex
{
    private:
       int real,img;
    public:
      Complex(int r=0,int i=0)
      {
        real=r;
        img =i;
      }
    friend void operator>>(istream &in,Complex&c)
      {
        cout<<"Enter real part"<<endl;
        cin>>c.real;
        cout<<"Enter imgainary part"<<endl;
        cin>>c.img;
      }
    friend void operator<<(ostream &os,Complex&c)
      {
         os<<c.real<<"+"<<c.img<<"i"<<endl;
      }
};
int main()
{
    Complex c1;
    cin>>c1;
    cout<<"The Complex number is"<<c1;
    return 0;
}