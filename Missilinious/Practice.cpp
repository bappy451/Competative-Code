#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
///Print list
void printList(Node** head_ref);
///Insert in front of a list
void push(Node** head_ref, int data);
///Insert at the last of a list
void append(Node** head_ref, int data);
///Search in a list
void list_search(Node** head_ref, int key);

int main()
{
    Node* head = NULL;

    append(&head, 10);
    push(&head,1);
    push(&head,2);
    push(&head, 10);
    append(&head, 100);

    printList(&head);
    list_search(&head, 10);

    return 0;
}

void printList(Node** head_ref)
{
    Node* temp = *head_ref;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}

void push(Node** head_ref, int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = *head_ref;
    *head_ref = temp;
}

void append(Node** head_ref, int data)
{
    Node* head = *head_ref;
    Node* temp = new Node();

    temp->data = data;
    temp->next = NULL;

    ///If list was empty
    if(head == NULL)
    {
        *head_ref = temp;
        return;
    }
    while(head->next != NULL)
        head = head->next;
    head->next = temp;
    return;
}

void list_search(Node** head_ref, int key)
{
    int pos = 0;
    Node *head = *head_ref;
    while(head != NULL)
    {
        if(head->data == key) cout<<"Found in the list. Position is: "<<pos<<endl;
        pos++;
        head = head->next;
    }
}
