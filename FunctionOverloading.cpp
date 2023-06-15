#include<iostream>
using namespace std;
void swap(int &x,int&y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void swap(double &x,double &y)
{
    double t;
    t=x;
    x=y;
    y=t;
}
void swap(char &x,char &y)
{
    char t;
    t=x;
    x=y;
    y=t;
}
main()
{
    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;
    cout<<"Before function call"<<a<<"\t"<<b;
    swap(a,b);
    cout<<"After function call"<<a<<"\t"<<b<<"\n";
    double c,d;
    cout<<"Enter c and d";
    cin>>c>>d;
    cout<<"Before function call"<<c<<"\t"<<d;
    swap(c,d);
    cout<<"After function call"<<c<<"\t"<<d<<"\n";
    char u,v;
    cout<<"Enter u and v";
    cin>>u>>v;
    cout<<"Before function call"<<u<<"\t"<<v;
    swap(u,v);
    cout<<"After function call"<<u<<"\t"<<v<<"\n";
}

