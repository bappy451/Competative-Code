#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
///Print list
void list_print(Node** head_ref);
///Insert at the front
void push(Node** head_ref, int data);
///Insert at the front
void append(Node** head_ref, int data);
///List search
void list_search(Node** head_ref, int key);
///delete a node of given value
void deleteNode(Node** head_ref, int key);

int main()
{
    Node* head = NULL;

    append(&head,10);
    list_print(&head);
    push(&head, 1);
    push(&head, 1);
    append(&head,10);
    push(&head, 2);
    push(&head, 2);
    append(&head,10);

    deleteNode(&head, 10);
    deleteNode(&head, 10);
    //deleteNode(&head, 10);
    list_print(&head);
    list_search(&head, 10);

    return 0;
}

void list_print(Node** head_ref)
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
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;

    Node* head = *head_ref;
    if(head == NULL){
        *head_ref = temp;
        return;
    }
    while(head->next != NULL)
        head = head->next;
    head->next = temp;
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

void deleteNode(Node** head_ref, int key)
{
    Node* head = *head_ref;
    Node* pre = head;

    if(head->data == key){
        *head_ref = head->next;
        free(head);
        return;
    }
    while(head != NULL)
    {
        if(head->data == key)
        {
            pre->next = head->next;
            free(head);
            return;
        }
        pre = head;
        head = head->next;
    }
    return;
}
