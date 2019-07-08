#include <iostream>

using namespace std;

class node
{
    public:
        char data;
        node *next;

        node(char x)
        {
            data = x;
            next = NULL;
        }
};

class Queue
{
    public:
        node *front;
        node *back;

        Queue()
        {
            front = NULL;
            back = NULL;
        }

        void enqueue(node *n)
        {
            if (back == NULL)
            {
                front = n;
                back = n;
            }
            else
            {
                back->next = n;
                back = n;
            }
        }

        void dequeue()
        {
            if (front == NULL)  return;

            // Implement here
            else {
            	node *p = front;
           		front = front->next;
            	p->next = NULL;
			}
        }

        void print()
        {
            if (isEmpty())
            {
                cout << "Queue is empty";
                return;
            }

            node* ptr = front;
            while (ptr != NULL)
            {
                cout << ptr->data <<  " ";
                ptr = ptr->next;
            }
        }

        bool isEmpty()
        {
            return front == NULL;
        }

        void makeEmpty()
        {
            // Implement here
         	*front = *back =-1;
        }
        
};

int main()
{
	Queue Q;
	
	node* n1 = new node('R');
    Q.enqueue(n1);
    
    node* n2 = new node('O');
    Q.enqueue(n2);
    
    node* n3 = new node('Z');
    Q.enqueue(n3);
    
    node* n4 = new node('A');
    Q.enqueue(n4);
    
    node* n5 = new node('R');
    Q.enqueue(n5);
    
    cout << "Enqueue : ";
	Q.print();
    
    cout << endl;
    Q.dequeue();
    cout << "Dequeue : ";
    Q.print();
    
    cout << endl;
    Q.makeEmpty();
    cout << "Make Empty Queue : ";
    Q.print();
  

    return 0;
}
