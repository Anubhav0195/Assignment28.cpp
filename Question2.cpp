#include<iostream>
using namespace std;
class Complex
{
    private:
     int real,img;
    public:
     void setdata(int r,int i)
     {
        this->real=r;
        this->img=i;
     }
     void display()
     {
        cout<<"REal="<<real<<"+"<<"img="<<img<<"i"<<endl;
     }

};
int main()
{
    Complex c1;
    c1.setdata(3,4);
    c1.display();
    return 0;
}