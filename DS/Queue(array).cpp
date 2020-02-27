#include<bits/stdc++.h>
using namespace std;


#define MAX 10

class Queue
{
    int top,_front;
public:
    int arr[MAX];
    Queue(){
        top = -1;
        _front = -1;
    }
    bool push(int n);
    int pop();
    int peek();
    bool isFull();
    bool isEmpty();
};


int main()
{
    Queue q;
    cout<<"Empty? :"<<q.isEmpty()<<endl;
    cout<<"Full?: "<<q.isFull()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    q.push(10);
    q.push(12);
    q.push(13);
    q.push(17);
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;

    q.push(10);
    q.push(12);
    q.push(13);
    q.push(17);
    q.push(10);
    q.push(12);
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;

    q.push(10);
    q.push(12);
    q.push(13);
    q.push(17);
    q.push(10);
    q.push(12);
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;

    q.push(10);
    q.push(12);
    q.push(13);
    q.push(17);
    q.push(10);
    q.push(12);
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;

    cout<<"Empty? :"<<q.isEmpty()<<endl;
    cout<<"Full?: "<<q.isFull()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;

    return 0;
}

bool Queue::push(int n)
{
    if(top >= MAX){
        printf("Queue is full!!!\n");
        return false;
    }
    arr[++top] = n;
    cout<<n<<" is inserted at "<<top<<endl;
    return true;
}

int Queue::pop()
{
    if(_front <= -1 || _front==top){
        printf("Queue is Empty!!!\n");
        return -1;
    }
    return arr[++_front];
}

int Queue::peek()
{
    if(top <= -1 || _front == top){
        printf("Queue is Empty!!!\n");
    }
    return arr[top];
}

bool Queue::isEmpty()
{
    if(top==_front || top <= -1) return true;
    else return false;
}

bool Queue::isFull()
{
    if(top>=MAX) return true;
    return false;
}
