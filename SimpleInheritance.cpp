#include<iostream>
using namespace std;
class Base
{
    private:
        int a;
    public:
        int b;
        void get_ab()
        {
            cout<<"\n Enter a and b: ";
            cin>>a>>b;
        }
        int get_a()
        {
            return a;
        }
};
class Derived: public Base
{
    private:
        int c;
    public:
        void mul()
        {
            c = get_a()*b;
        }
        void display()
        {
            cout<<"\n The value of a: "<<get_a();
            cout<<"\n The value of b: "<<b;
            cout<<"\n The value of c: "<<c;
        }
};
main()
{
    Derived d;
    d.get_ab();
    d.mul();
    d.display();
}