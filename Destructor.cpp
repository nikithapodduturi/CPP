#include<iostream>
using namespace std;
int c=0;
class Test
{
    public:
        Test()
        {
            c++;
            cout<<"\n The object is created";
        }
        ~Test()
        {
            cout<<"\n The object is deleted";
            c--;
        }
};
main()
{
    cout<<"\n Entered into main";
    Test T1,T2,T3;
    {
        cout<<"\n Entered into block1";
        Test T4;
    }
    {
        cout<<"\n Entered into block2";
        Test T5;
    }
    {
    cout<<"\n Re-enetered into main";
    }
}