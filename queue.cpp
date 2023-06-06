#include<iostream>
#include<stdlib.h>
using namespace std;
#define max 5
class queue
{
    int a[max],front,rear;
    public:
        queue()
        {
            rear=front=-1;
        }
        void insertion(int x)
        {
            if(rear<max-1)
            {
                rear++;
                a[rear]=x;
                cout<<"\n The inserted element is: "<<x;
                if(front==-1)
                    front=0;
            }
            else{
                cout<<"\n Queue is full";
            }
        }
        void deletion()
        {
            if(front==-1)
            {
                cout<<"\n Queue is empty";
            }
            else{
                cout<<"\n The deleted element is: "<<a[front];
                a[front]=NULL;
                front++;
                if(front>rear)
                    front=rear=-1;
            }
        }
        void display()
        {
            if(front==-1)
            {
                cout<<"\n Stack is empty";
            }
            else{
                cout<<"\n The elements of the stack are: ";
                for(int i=front;i<=rear;i++)
                {
                    cout<<"\t"<<a[i];
                }
            }
        }
};
main()
{
    queue s;
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
                s.insertion(ele);
                break;
            case 2:
                cout<<"\n Popped element is: ";
                s.deletion();
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