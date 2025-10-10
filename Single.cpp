#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j;

    void Fun()
    {
        cout<<"Inside Base Fun: \n";
    }
};
class Derived : public Base
{
    public:
        int x;

        void Gun()
        {
            cout<<"Inside Derived Gun: \n";
        }
};
int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of base class object: "<<sizeof(bobj)<<"\n";
    
    cout<<"Size of Derived class object: "<<sizeof(dobj)<<"\n";

    return 0;
}

