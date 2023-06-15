#include<iostream>
using namespace std;
inline int mul(int l,int j=5,int k=10)
{
    return l*j*k;
}
int main()
{
    int a,b,c;
    cout<<"Enter a and b and c values";
    cin>>a>>b>>c;
    cout<<"\n The result is "<<mul(a,b,c);
    cout<<"\n The result is "<<mul(a,b);
    cout<<"\n The result is "<<mul(a,c);
    cout<<"\n The result is "<<mul(a);
    cout<<"\n The result is "<<mul(b);
}