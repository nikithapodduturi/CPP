#include<iostream>
using namespace std;
class Student
{
    private:
        int rno;
        char name[20];
        float marks;
    public:
        void get_data()
        {
            cout<<"\n Enter Student details: ";
            cin>>rno>>name>>marks;
        }
        void put_data()
        {
            cout<<"\n Student details are: "<<rno<<" "<<name<<" "<<marks;
        }
};
main()
{
    Student s;
    s.get_data();
    s.put_data();
}