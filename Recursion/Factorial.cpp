#include<bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    if(n<0) return -1;
    if(n<2) return 1;
    long long res = 1;
    for(int i=1; i<= n; i++)
        res *= i;
    return res;
}

long long rfactorial(int n)
{
    if(n<0) return -1;
    if(n<2) return 1;
    else return n*rfactorial(n-1);
}

int main()
{
    int n;
    while(cin>>n)
    {
        long long i,j;
        i = factorial(n);
        j = rfactorial(n);
        cout<<i<<" \t"<<j;
        if(i==j)
            cout<<"\t"<<"ok"<<endl;
        else break;
    }

    return 0;
}
