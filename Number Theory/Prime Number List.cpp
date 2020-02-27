#include<bits/stdc++.h>
using namespace std;

///Primality test with sqrt and precision error optimization.
bool isPrime(long long n)
{
    if(n<2) return false;
    for(int i=2; i*i<=n ;i++)
        if(n%i == 0) return false;
    return true;
}

/// Naive approch for getting prime upto N.
vector<int> getPrimes(long long n)
{
    vector<int> myvec;
    for(int i=0; i<=n; i++)
        if(isPrime(i)) myvec.push_back(i);
    return myvec;
}

///Sieve of Eratosthenes naive implementation.
#define M 1000
bool Mark[M+1];
void SieveGetPrimes()
{
    Mark[0] = true;
    Mark[1] = true;
    for(long long i=2; i<=M; i++)
        if(!Mark[i])
        for(long long k = i+i; k<=M; k+=i){
            Mark[k] = true;
        }
}

///Optimization in Sieve in first and second for loop.
void OSieveGetPrimes()
{
    Mark[0] = true;
    Mark[1] = true;
    for(long long i=2; i*i<=M; i++)
        if(!Mark[i])
        for(long long k = i*i; k<=M; k+=i){
            Mark[k] = true;
        }
}

///Further Optimization in Sieve considering even numbers.
void FOSieveGetPrimes()
{
    Mark[0] = true;
    Mark[1] = true;
    Mark[2] = false;
    for(long long i=4; i<=M; i+=2)
        Mark[i] = true;
    for(long long i=3; i*i<=M; i+=2)
        if(!Mark[i])
        for(long long k = i*i; k<=M; k+=i){
            Mark[k] = true;
        }
}

///Prime check using Sieve.
bool SisPrime(int n)
{
    return !Mark[n];
}

int main()
{
    cout<<isPrime(83)<<endl;
    vector<int> primes;
    primes = getPrimes(100);
    for(auto i= primes.begin(); i<primes.end(); i++)
        cout<<*i<<" ";
    cout<<endl<<endl;
    ///SieveGetPrimes();
    ///OSieveGetPrimes();
    FOSieveGetPrimes();
    for(int i=0; i<=100; i++)
        if(!Mark[i]) cout<<i<<" ";
    cout<<endl;
    cout<<SisPrime(97)<<endl;
    return 0;
}
