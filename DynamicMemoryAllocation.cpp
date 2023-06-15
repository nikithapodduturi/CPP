#include<iostream>
using namespace std;
main()
{
    int *a=new int;
    int *b=new int;
    *a=4;
    *b=9;
    *a = (*a)*(*a);
    cout<<"\n a = "<<*a;
    delete a;
    cout<<"\n b = "<<*b;
    delete b;
}