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
            cout<<"\n Details are: "<<rno<<" "<<name;
        }
};
class marks:public Student
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
            cout<<"\n Marks are: "<<s1<<" "<<s2;
        }
};
class sports
{
    protected:
        float score;
    public:
        void get_score()
        {
            cout<<"\n Enter score: ";
            cin>>score;
        }
        void put_score()
        {
            cout<<"\n Score is: "<<score;
        }
};
class result: public marks,public sports
{
    private:
        float res;
    public:
        void display()
        {
            res=s1+s2+score;
            cout<<"\n The result is: "<<res;
        }
};
main()
{
    result r;
    r.get_details();
    r.get_marks();
    r.get_score();
    r.put_details();
    r.put_marks();
    r.put_score();
    r.display();
}