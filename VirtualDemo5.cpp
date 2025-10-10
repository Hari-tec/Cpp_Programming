#include<iostream>
using namespace std;
#pragma pack(1)

class Base
{
    public:
        int i,j;

    void fun()
    {
        cout<<"Inside Base fun\n";
    }

    void gun()
    {
        cout<<"Inside Base gun\n";
    }

    virtual void sun()
    {
        cout<<"Inside Base sun\n";
    }

    virtual void bun()
    {
        cout<<"Inside Base bun\n";
    }
};

class Derived : public Base
{
    public:
        int x;

    void gun()
    {
        cout<<"Inside Derived gun\n";
    }

    void sun()
    {
        cout<<"Inside Derived sun\n";
    }

    void run()
    {
        cout<<"Inside Derived run\n";
    }

    void mun()
    {
        cout<<"Inside Derived mun\n";
    }
};
int main()
{
    Base *bp = new Derived();      //Upcasting

    bp->fun();       //Base fun
    bp->gun();        //Base gun
    bp->sun();        //Derived sun
    bp->bun();        //Base bun
   // bp->run();      //Error
   // bp->mun();      //Error
    
    return 0;
}