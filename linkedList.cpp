#include<iostream>
using namespace std;
class linkedList
{
    struct node
    {

        int data;
        node *ptr;
    }*p;
    public:
        linkedList()
        {
            p=NULL;
        }
        void InsBeg(int x)
        {
           node *q;
           q=new node;
           q->data=x;
           q->ptr=p;
           p=q; 
        }
        void InsEnd(int x)
        {
            node *q,*r;
            if(p==NULL)
            {
                p=new node;
                p->data=x;
                p->ptr=NULL;
            }
            else
            {
                q=p;
                while(q->ptr!=NULL)
                {
                    q=q->ptr;
                }
                r=new node;
                r->data =x;
                r->ptr=NULL;
                q->ptr=r;
            }
        }
        void insertAfter(int x,int z)
        {
            node *q,*r;
            q=p;
            while(q!=NULL)
            {
                if(q->data==z)
                {
                    r=new node;
                    r->data = x;
                    r->ptr=q->ptr;
                    q->ptr=r;
                    q=NULL;
                }
                else
                {
                    q=q->ptr;
                }
            }
        }
        void insByPos(int x,int c)
        {
            node *q,*r;
            q=p;
            for(int i=1;i<c;i++)
            {
                q=q->ptr;
                if(q==NULL)
                {
                    cout<<"\n Less Position";
                    exit(0);
                }
            }
            r=new node;
            r->data=x;
            r->ptr=q->ptr;
            q->ptr=r;
        }
        void deleteBegin()
        {
            node *q;
            if(p==NULL)
            {
                cout<<"\n List is empty";
            }
            else
            {
                q=p;
                p=p->ptr;
                cout<<"\n The deleted element is: "<<q->data;
                delete q;
            }
        }
        void deleteEnd()
        {
            node *q,*r;
            q=p;
            if(p==NULL)
            {
                cout<<"\n List is empty";
            }
            else
            {
                while(q!=NULL)
                {
                    if((q->ptr)->ptr==NULL)
                    {
                        r=q->ptr;
                        cout<<"\n The deleted element is: "<<r->data;
                        delete r;
                        q->ptr=NULL;
                        q=NULL;
                    }
                    else
                    {
                        q=q->ptr;
                    }
                }
            }
        }
        void delMid(int z)
        {
            node *q,*r;
            q=p;
            if(p==NULL)
            {
                cout<<"\n List is empty";
            }
            else
            {
                if(q->data==z)
                {
                    p=p->ptr;
                    cout<<"\n The deleted element is: "<<q->data;
                    delete q;
                }
                else
                {
                    while(q!=NULL)
                    {
                        if(q->data==z)
                        {
                            r->ptr=q->ptr;
                            cout<<"\n The deleted element is: "<<q->data;
                            delete q;
                            q=NULL;
                        }
                        else
                        {
                            r=q;
                            q=q->ptr;
                        }
                    }
                }
            }
        }
        void display()
        {
            node *q;
            if(p==NULL)
            {
                cout<<"\n List is empty";
            }
            else
            {
                cout<<"\n The element of the list are: ";
                q=p;
                while(q!=NULL)
                {
                    cout<<"\n The element is: "<<q->data;
                    q=q->ptr;
                }
            }
        }
};
main()
{
    linkedList l;
    /* int x,ch,z;
    do
    {
        cout<<"1.Insert Begin";
        cout<<"2.Insert End";
        cout<<"3.Insert After";
        cout<<"4.Insert By Pos";
        cout<<"5.Delete Begin";
        cout<<"6.Delete End";
        cout<<"7.Delete Middle";
        cout<<"8.Display";
        cout<<"9.Exit";
        cout<<"Enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\n Enter element to insert";
                cin>>x;
                l.InsBeg(x);
                break;
            case 2:
                cout<<"\n Enter element to insert";
                cin>>x;
                l.InsEnd(x);
                break;
            case 3:
                cout<<"\n Enter element to insert";
                cin>>x;
                cout<<"\n Enter z value";
                cin>>z;
                l.insertAfter(x,z);
                break;
            case 4:
                cout<<"\n Enter element to insert";
                cin>>x;
                cout<<"\n Enter z value";
                cin>>z;
                l.insByPos(x,z);
                break;
            case 5:
                cout<<"\n Delete at begin";
                l.deleteBegin();
                break;
            case 6:
                cout<<"\n Delete at end";
                l.deleteEnd();
                break;
            case 7:
                cout<<"\n Delete middle";
                cout<<"\n Enter z value";
                cin>>z;
                l.delMid(z);
                break;
            case 8:
                cout<<"\n LinkedList is: ";
                l.display();
                break;
            case 9:
                exit(0);
                break;
            default:
                cout<<"\n Invalid choice";
                break;
        }
    }
    while(true);*/
    int x,choice,z;
    char ch='Y';
    while(ch=='Y' || ch=='y')
    {
        cout<<"1.Insert Begin";
        cout<<"2.Insert End";
        cout<<"3.Insert After";
        cout<<"4.Insert By Pos";
        cout<<"5.Delete Begin";
        cout<<"6.Delete End";
        cout<<"7.Delete Middle";
        cout<<"8.Display";
        cout<<"9.Exit";
        cout<<"Enter your choice";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\n Enter element to insert";
                cin>>x;
                l.InsBeg(x);
                break;
            case 2:
                cout<<"\n Enter element to insert";
                cin>>x;
                l.InsEnd(x);
                break;
            case 3:
                cout<<"\n Enter element to insert";
                cin>>x;
                cout<<"\n Enter z value";
                cin>>z;
                l.insertAfter(x,z);
                break;
            case 4:
                cout<<"\n Enter element to insert";
                cin>>x;
                cout<<"\n Enter z value";
                cin>>z;
                l.insByPos(x,z);
                break;
            case 5:
                cout<<"\n Delete at begin";
                l.deleteBegin();
                break;
            case 6:
                cout<<"\n Delete at end";
                l.deleteEnd();
                break;
            case 7:
                cout<<"\n Delete middle";
                cout<<"\n Enter z value";
                cin>>z;
                l.delMid(z);
                break;
            case 8:
                cout<<"\n LinkedList is: ";
                l.display();
                break;
            case 9:
                exit(0);
                break;
            default:
                cout<<"\n Invalid choice";
                break;
        }
        cout<<"\n Do ypu want to continue? ";
        cin>>ch;
    }
}