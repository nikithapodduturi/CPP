#include<iostream>
using namespace std;

class CircularLinkedList {
    struct node {
        int data;
        node* ptr;
    }* p;

public:
    CircularLinkedList() {
        p = NULL;
    }

    void insertion(int x) {
        node* q, * r;
        if (p == NULL) {
            p = new node;
            p->data = x;
            p->ptr = p;
        }
        else {
            q = p;
            while (q->ptr != p) {
                q = q->ptr;
            }
            r = new node;
            r->data = x;
            r->ptr = p;
            q->ptr = r;
        }
    }

    void deletion(int z) {
        node* q, * r, * k;
        q = p;
        if (q->data == z) {
            if (p->ptr == p) {
                cout << "\nThe deleted element is " << p->data;
                delete p;
                p = NULL;
            }
            else {
                while (q->ptr != p) {
                    q = q->ptr;
                }
                r = q->ptr;
                q->ptr = p->ptr;
                p = p->ptr;
                cout << "\nThe deleted element is " << r->data;
                delete r;
            }
        }
        else {
            r = q;
            q = q->ptr;
            while (q != p) {
                if (q->data == z) {
                    cout << "\nThe deleted element is " << q->data;
                    r->ptr = q->ptr;
                    delete q;
                    q = p;
                }
                else {
                    r = q;
                    q = q->ptr;
                }
            }
        }
    }

    void display() {
        node* q;
        if (p == NULL) {
            cout << "List is empty." << endl;
        }
        else {
            q = p;
            cout << "Elements of the list are:" << endl;
            do {
                cout << q->data << " ";
                q = q->ptr;
            } while (q != p);
            cout << endl;
        }
    }
};

int main() {
    CircularLinkedList l;
    int choice, x, z;

    do {
        cout << "Linked List Operations:\n";
        cout << "1. Insertion\n";
        cout << "2. Deletion\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter an element to insert: ";
            cin >> x;
            l.insertion(x);
            break;
        case 2:
            cout << "Enter the element you want to delete: ";
            cin >> z;
            l.deletion(z);
            break;
        case 3:
            l.display();
            break;
        case 4:
        cout<<"linked list closed"<<endl;
            exit(0);
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (choice <= 4);
    return 0;
}