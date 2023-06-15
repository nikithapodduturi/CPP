#include<iostream>
using namespace std;
class Student
{
    private:
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
            cout<<"\n The rno is: "<<rno<<" and name is: "<<name;
        }
};
class marks: public Student
{
    protected: 
        float s1,s2;
    public:
        void get_marks()
        {
            cout<<"\n Enter s1 and s2: ";
            cin>>s1>>s2;
        }
        void put_marks()
        {
            cout<<"\n The marks are: "<<s1<<" "<<s2;
        }
};
class Test: public marks
{
    private:
        float total;
    public:
        void result()
        {
            total = s1+s2;
        }
        void display()
        {
            cout<<"\n The total is: "<<total;
        }
};
main()
{
    Test t;
    t.get_details();
    t.get_marks();
    t.put_details();
    t.put_marks();
    t.result();
    t.display();
}
