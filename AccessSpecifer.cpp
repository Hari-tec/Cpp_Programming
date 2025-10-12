#include<iostream>

using namespace std;

class Base //12
{
    public:
        int i;

    private:
        int j;

    protected:
        int k;

    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }

        void Fun()
        {
            cout<<i<<"\n"; //A
            cout<<j<<"\n"; //A
            cout<<k<<"\n"; //A
        }
        
   
};
class Derived : public Base //16
{
    public:
        int X;
        void display()
        {
            cout<<i<<"\n"; //A
            //cout<<j<<"\n"; //Error
            cout<<k<<"\n"; //A
        }
        
};
int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n"; //A
  //  cout<<bobj.j<<"\n"; //Error
   // cout<<bobj.k<<"\n"; //Error

    cout<<dobj.i<<"\n"; //A
    //cout<<dobj.j<<"\n"; //Error
    //cout<<dobj.k<<"\n"; //Error

    dobj.Fun(); //A
    dobj.display(); //A 

    return 0;
}

