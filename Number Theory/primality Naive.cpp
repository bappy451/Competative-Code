#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<2) return false;
    for(int i=2; i<n; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

///1 optimization using sqrt loop minimizing loop from n.
bool isPrimeOsq(int n)
{
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

///1.1 optimization using sqrt considering precision error.
bool isPrimeOsqP(long long n)
{
    if(n<2) return false;
    for(long long i=2; i*i<=n; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    cout<<isPrime(83)<<endl;
    cout<<isPrimeOsq(83)<<endl;
    cout<<isPrimeOsqP(83)<<endl;

    return 0;
}
