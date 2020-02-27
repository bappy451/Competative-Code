#include<bits/stdc++.h>
using namespace std;

#define MAX 10

class Stack{
    int top;
public:
    int a[MAX];

    Stack()
    {
        top = -1;
    }
    bool push(int n);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};


int main()
{
    class Stack s;
    cout<<s.isEmpty()<<endl;
    s.push(10);
    cout<<s.peek()<<endl;
    s.push(11);
    cout<<s.peek()<<endl;
    s.push(12);
    cout<<s.peek()<<endl;
    s.push(115);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    s.push(16);
    s.push(17);
    s.push(19);
    s.push(17);
    s.push(16);

    cout<<s.isEmpty()<<endl;
    cout<<s.isFull()<<endl;

    s.push(17);
    s.push(19);
    s.push(17);

    s.push(16);
    s.push(17);
    s.push(19);
    s.push(17);

    cout<<s.isFull()<<endl;

    return 0;
}

bool Stack::push(int n)
{
    if(top >= MAX){
        cout<<"Stack is full!!!"<<endl;
        return false;
    }
    top++;
    a[top] = n;
    printf("%d is pushed at %d in the stack\n",n,top);
    return true;
}

int Stack::pop()
{
    if(top<0){
        printf("stack is empty!!!\n");
        return -1;
    }
    return a[top--];
}

int Stack::peek()
{
    if(top<0){
        printf("stack is empty!!!\n");
        return -1;
    }
    return a[top];
}

bool Stack::isEmpty()
{
    return top<0 ? true:false;
}

bool Stack::isFull()
{
    return top>=MAX ? true:false;
}
