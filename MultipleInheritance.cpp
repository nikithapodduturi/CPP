#include<iostream>
using namespace std;
class Base1
{
    protected:
        int m;
    public:
        void get_m()
        {
            cout<<"\n enter m value: ";
            cin>>m;
        }
};
class Base2
{
    protected:
        int n;
    public:
        void get_n(int y)
        {
            n=y;
        }
};
class derived: public Base1,public Base2
{
    public:
        void display()
        {
            cout<<"\n m value is: "<<m;
            cout<<"\n n value is: "<<n;
            cout<<"\n The result is: "<<m*n;
        }
};
main()
{
    derived d;
    d.get_m();
    d.get_n(5);
    d.display();
}