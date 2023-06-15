#include<iostream>
using namespace std;
class Integer
{
    private:
        int m,n,I;
    public:
        void display()
        {
            cout<<"\n Values of m and n are: "<<m<<" "<<n;
        }
        Integer()
        {
            cout<<"\n Enter m and n values";
            cin>>m>>n;
        }
        Integer(int x, int y=10)
        {
            m=x;
            n=y;
        }
        Integer(Integer &I)
        {
            m=I.m;
            n=I.n;
        }
};
int main()
{
    Integer I1;
    Integer I2(5,7);
    Integer I3(8,9);
    I1.display();
    I2.display();
    I3.display();
    return 0; 
}