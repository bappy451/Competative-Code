#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class lList
{
private:
    node *head,*tail;
public:
    lList()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int n)
    {
        node* tmp = new node;
        tmp->data = n;
        tmp->next = head;
        head = tmp;
    }

    void add_node(int n)
    {
        node *temp = new node;
        temp->data = n;
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }

    }
    void display()
    {
        node *tmp = new node;
        tmp = head;
        while(tmp!=NULL)
        {
            cout<<tmp->data<<endl;
            tmp = tmp->next;
        }
    }
};


int main()
{
    lList l;
    l.add_node(1);
    l.add_node(2);
    l.display();
    l.push(10);
    l.display();

    return 0;
}
