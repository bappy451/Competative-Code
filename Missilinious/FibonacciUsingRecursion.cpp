#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n==1) return 1;
    if(n<1) return 0;
    return fibonacci(n-2)+fibonacci(n-1);
}

int fibonacciTail(int n, int a, int b) {

    if(n==0) return a;
    if(n==1) return b;

    return fibonacciTail(n-1,b,a+b);
}

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<fibonacci(n)<<endl;
    }

    return 0;
}
