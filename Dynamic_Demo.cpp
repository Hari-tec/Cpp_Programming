#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements:\n";
    cin>>length;

    //step 1: Allocate the memory
    Arr = new int [length];
    if(Arr == NULL)
    {
        cout<<"unable to allocate memory\n";
    }
    else
    {
        cout<<"Memory allocated succesfully\n";
    }

    //step 2: Use the memory

    //step 3: Free the memory
    delete [] Arr;

    return 0;
}