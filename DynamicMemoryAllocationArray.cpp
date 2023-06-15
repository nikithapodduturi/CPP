#include<iostream>
using namespace std;
main()
{
    int i,n;
    cout<<"\n Enter n value ";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    delete []a;
}