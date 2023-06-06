#include <iostream>
using namespace std;
class DoubleLinkedlist
{
    struct node
    {
        int data;
        node *prev;
        node *next;
    }*p;
    public:
        DoubleLinkedlist()
        {
            p=NULL;
        }
        void insBeg(int x)
        {
            node *q;
            if(p==NULL)
            {
                p=new node;
                p->prev=NULL;
                p->data=x;
                p->next=NULL;
            }
            else
            {
                q=new node;
                q->data=x;
                q->prev=NULL;
                q->next=p;
                p->prev=q;
                p=q;
            }
        }
        void insEnd(int x)
        {
            node *q,*r;
            if(p==NULL)
            {
                p=new node;
                p->prev=NULL;
                p->data=x;
                p->next=NULL;
            }
            else
            {
                q=p;
                while(q->next!=NULL)
                {
                    q=q->next;
                }
                r=new node;
                r->data=x;
                r->prev=q;
                r->next=NULL;
                q->next=r;
            }
        }
        void insAfter(int x,int z)
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
                    if(q->data==z)
                    {
                        r=new node;
                        r->data=x;
                        r->prev=q;
                        r->next=q->next;
                        (q->next)->prev = r;
                        q->next=r;
                        q=NULL;
                    }
                    else
                    {
                        q=q->next;
                    }
                }
            }
        }
        void insertByPos(int x,int c)
        {
            node *q,*r;
            q=p;
            if(p==NULL)
            {
                cout<<"\n List is empty";
            }
            else
            {
                for(int i=1;i<c;i++)
                {
                    q=q->next;
                    if(q==NULL)
                    {
                        cout<<"\n Less elements";
                        exit(0);
                    }
                }
                r=new node;
                r->data=x;
                r->prev=q;
                r->next=q->next;
                (q->next)->prev=r;
                q->next=r;
            }
        }
        void delBeg()
        {
            node *q;
            if(p==NULL)
            {
                cout<<"\n List is empty";
            }
            else
            {
                q=p;
                p=p->next;
                cout<<"\n The deleted element is: "<<q->data;
                p->prev=NULL;
                delete q;
            }
        }
        void delEnd()
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
                    if(q->next==NULL)
                    {
                        cout<<"\n deleted element is: "<<q->data;
                        delete q;
                        q=NULL;
                    }
                    if((q->next)->next==NULL)
                    {
                        r=q->next;
                        cout<<"\n Deleted element is: "<<r->data;
                        delete r;
                        q->next=NULL;
                        q=NULL;
                    }
                    else
                    {
                        q=q->next;
                    }
                }
            }
        }
        void delMid(int z)
        {
            node *q,*r;
            if(p==NULL)
            {
                cout<<"\n List is empty";
            }
            else
            {
                q=p;
                if(q->data==z)
                {
                    p=p->next;
                    cout<<"\n"<<q->data;
                    delete q;
                    p->prev=NULL;
                }
                else
                {
                    while(q!=NULL)
                    {
                        if(q->data==z)
                        {
                            (q->prev)->next=q->next;
                            (q->next)->prev=q->prev;
                            cout<<q->data;
                            delete q;
                            q=NULL;
                        }
                        else
                        {
                            r=q;
                            q=q->next;
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
                cout<<"\n The elements of the list are: ";
                q=p;
                while(q!=NULL)
                {
                    cout<<"\t"<<q->data;
                    q=q->next;
                }
            }
        }
};
main()
{
    DoubleLinkedlist l;
    int x,ch,z;
    do 
    {
        cout<<"1.insBeg"<<"\n 2.insEnd"<<"\n 3.insAfter"<<"\n 4.insertByPos"<<"\n 5.delBeg"<<"\n 6.delEnd"<<"\n 7.delMid"<<"\n 8.display"<<"\n 9.exit";
        cout<<"\n Enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\n Enter element to insert";
                cin>>x;
                l.insBeg(x);
                break;
            case 2:
                cout<<"\n Enter element to insert";
                cin>>x;
                l.insEnd(x);
                break;
            case 3:
                cout<<"\n Enter element to insert";
                cin>>x;
                cout<<"\n Enter z value";
                cin>>z;
                l.insAfter(x,z);
                break;
            case 4:
                cout<<"\n Enter element to insert";
                cin>>x;
                cout<<"\n Enter z value";
                cin>>z;
                l.insertByPos(x,z);
                break;
            case 5:
                cout<<"\n Delete at begin";
                l.delBeg();
                break;
            case 6:
                cout<<"\n Delete at end";
                l.delEnd();
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
    while(true);
}