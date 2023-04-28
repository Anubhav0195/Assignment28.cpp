#include<iostream>
using namespace std;
class Coords3D
{
    double x,y,z;
    public:
    Coords3D()
    {
        x=y=z=0;
    }
    Coords3D(double x,double y,double z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;

    }
    Coords3D operator,(Coords3D obj)
    {
        Coords3D temp;
        temp.x=obj.x;
        temp.y=obj.y;
        temp.z=obj.z;
        return temp;
    }


};
int main()
{
    Coords3D c1(2,3,4);
    Coords3D c2(6,7,8);
    Coords3D c3;
    c3=(c1,c2);
    c3.display();
    cout<<endl;
    Coords3D c4(4,5,6);
    c3=(c1,c2,c4);
    c3.display();
    return 0;


}