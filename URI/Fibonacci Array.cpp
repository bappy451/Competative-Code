#include<bits/stdc++.h>
using namespace std;


#define MAX 100
long long arr[MAX];

long long Fibonacci(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else if(arr[n] == 0) arr[n] = Fibonacci(n-1) + Fibonacci(n-2);
    return arr[n];
}

long long fibonacciN(int n)
{
    if(n==0) return 0;
    if(n==1 || n==2) return 1;
    return fibonacciN(n-1) + fibonacciN(n-2);
}

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int temp;
        cin>>temp;
        printf("Fib(%d) = %lld\n",temp, Fibonacci(temp));
    }

    /*vector <long long> fibonacci(60 + 1, 0);
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i <= 60; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];


    for(int i=0; i<=60; i++)
    {
        long long temp1 = Fibonacci(i);
        if(temp1 == fibonacci[i]) cout<<"ok for "<<i<<" "<<temp1<<endl;
        else cout<<i<<" problem"<<temp1<<" "<<fibonacci[i]<<endl;
    }*/

    return 0;
}
