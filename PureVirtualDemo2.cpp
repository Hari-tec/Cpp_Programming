#include<iostream>
using namespace std;
#pragma pack(1)

class Base
{
    public:
        int i,j;

    int Addition(int a,int b)                              //concrete
     {
        return a+b;
    }

    virtual int substraction(int a, int b) = 0;           //abstract
};

#pragma pack(1)
class Derived : public Base        
{
    public:
        int x;

    int substraction(int a, int b)          //concrete
    {
        return a-b;
    }

    int multiplication(int a, int b)         //concrete
    {
        return a*b;
    }
};

int main()
{
    Base *bp = new Derived();        //Upcasting
    int iRet = 0;

    iRet = bp->Addition(10,11);         //21
    cout<<iRet<<"\n";

    iRet = bp->substraction(11,10);     //1
    cout<<iRet<<"\n";

   // iRet = bp->multiplication(11,10);       //Error


    return 0;
}