#include<bits/stdc++.h>
using namespace std;

stack<int> convert(int n, int b)
{
    stack<int> myStack;
    while(n>0)
    {
        int reminder = n%b;
        n /= b;
        myStack.push(reminder);
    }
    return myStack;
}

int main()
{
    int n;///Number in 10 base;
    int b;///Expected Base;
    cout<<"This program will work only for base 2-10 & 16 input number is 10 based"<<endl;
    while(cin>>n>>b)
    {
        stack<int> converted;
        converted=convert(n,b);
        while(!converted.empty())
        {
            if(converted.top()>9)
            {
                if(converted.top()==10) cout<<'A';
                else if(converted.top()==11) cout<<'B';
                else if(converted.top()==12) cout<<'C';
                else if(converted.top()==13) cout<<'D';
                else if(converted.top()==14) cout<<'E';
                else if(converted.top()==15) cout<<'F';
            }
            else
            cout<<converted.top();
            converted.pop();
        }
        cout<<endl;
    }
    return 0;
}
