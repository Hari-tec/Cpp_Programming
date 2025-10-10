#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
};

class Derived : public Base
{
    public:
        int x;
};

int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    return 0;
}