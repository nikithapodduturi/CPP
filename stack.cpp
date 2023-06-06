#include<iostream>
#include<stdlib.h>
using namespace std;
#define max 5
class stack
{
    int a[max],top;
    public:
        stack()
        {
            top=-1;
        }
        void push(int x)
        {
            if(top<max-1)
            {
                top++;
                a[top]=x;
                cout<<"\n The inserted element is: "<<x;
            }
            else{
                cout<<"\n Stack is full";
            }
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"\n Stack is empty";
            }
            else{
                cout<<"\n The deleted element is: "<<a[top];
                a[top]=NULL;
                top--;
            }
        }
        void display()
        {
            if(top==-1)
            {
                cout<<"\n Stack is empty";
            }
            else{
                cout<<"\n The elements of the stack are: ";
                for(int i=top;i>=0;i--)
                {
                    cout<<"\t"<<a[i];
                }
            }
        }
};
main()
{
    stack s;
    int ele,choice;
    char ch='Y';
    while(ch=='Y'||ch=='y')
    {
        cout<<"1.push";
        cout<<"2.pop";
        cout<<"3.display";
        cout<<"4.exit";
        cout<<"\n enter your choice: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
                cout<<"\n Enter element to insert";
                cin>>ele;
                s.push(ele);
                break;
            case 2:
                cout<<"\n Popped element is: ";
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Invalid choice";
        }
        cout<<"Do you want to continue: ";
        cin>>ch;
        
    }
}