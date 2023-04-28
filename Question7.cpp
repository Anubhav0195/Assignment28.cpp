#include<iostream>
using namespace std;
class Integers
{
    int i;
    public:
    Integers(int i):i(i)
    {

    }
    int operator!()
    {
        return !i;
    }
};
int main()
{
    Integers i1=10;
    cout<<!i1<<endl;
    return 0;

}