#include<iostream>
using namespace std;
class Student
{
    protected:
        int rno;
        char name[20];
    public:
        void get_details()
        {
            cout<<"\n Enter rno and name: ";
            cin>>rno>>name;
        }
        void put_details()
        {
            cout<<"\n Student details are: "<<rno<<" "<<name;
        }
};
class science: public Student
{
    protected:
        float s1,s2;
    public:
        void get_scmarks()
        {
            cout<<"\n Enter s1 and s2 marks: ";
            cin>>s1>>s2;
        }
        void put_scmarks()
        {
            cout<<"\n Marks are: "<<s1<<" "<<s2;
        }
};
class arts: public Student
{
    protected:
        float a1,a2;
    public:
        void get_artsmarks()
        {
            cout<<"\n enter a1 and a2 marks: ";
            cin>>a1>>a2;
        }
        void put_artsmarks()
        {
            cout<<"\n Marks are: "<<a1<<" "<<a2;
        }
};
main()
{
    science s;
    arts a;
    s.get_details();
    s.get_scmarks();
    a.get_artsmarks();
    s.put_details();
    s.put_scmarks();
    a.put_artsmarks();
}