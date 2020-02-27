#include<bits/stdc++.h>
using namespace std;


long long factorial(long long n)
{
    if(n==1) return 1;
    return n*factorial(n-1);
}

long long factorial(long long n,long long res)
{
    if(n==1) return res;
    return factorial(n-1,n*res);
}

int main()
{
    //cout<<factorial(20);
    printf("%lld\n",factorial(10));
    printf("%lld\n",factorial(10,1));
    return 0;
}
