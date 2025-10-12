#include<iostream>
using namespace std;
#pragma pack(1)

class Base
{
    public:
        int i,j;

    int Addition(int a,int b)
    {
        return a+b;
    }

    virtual int substraction(int a, int b) = 0;
};

#pragma pack(1)
class Derived : public Base        //Error
{
    public:
        int x;
};

int main()
{
   // Base *bp = new Derived();        //Upcasying

    return 0;
}