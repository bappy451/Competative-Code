#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
///Print list;
void printList(Node** head);
///Insert in front of a list.
void push(Node** head,int value);
///Inset at the last position.
void append(Node** head, int value);

int main()
{
    Node* head = NULL;
    append(&head,100);
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);
    append(&head,7);
    append(&head,8);
    append(&head,9);
    printList(&head);

    return 0;
}

void printList(Node** head)
{
    Node* temp = *head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void push(Node** head, int value)
{
    Node* temp = new Node();
    temp->data = value;
    temp->next = *head;
    *head = temp;
}

void append(Node** head, int value)
{
    Node* tHead = *head;
    Node* temp = new Node();
    temp->data = value;
    temp->next = NULL;

    if(tHead == NULL){
        *head = temp;
        return;
    }

    while(tHead->next != NULL)
        tHead = tHead->next;

    tHead->next = temp;
}
