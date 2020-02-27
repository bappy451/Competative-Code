#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000000
bool Mark[SIZE];

/// Optimized Sieve algorithm.
void sieve()
{
    for(int i=3; i*i<=SIZE; i+=2)
        if(!Mark[i])
        for(int k= i*i; k<=SIZE; k+=i)
            Mark[k] = true;
}

bool isPrime(int n)
{
    if(n<2) return false;
    else if(n==2) return true;
    else if(n%2==0) return false;
    else
        return !Mark[n];
}

/// Naive approach
vector<int> getFactors(int n)
{
    vector<int> myvec;
    myvec.push_back(1);
    if(n==1) return myvec;

    if(isPrime(n)){
         myvec.push_back(n);
         return myvec;
    }

    for(int i=2; i<n; i++)
        if(n%i == 0) myvec.push_back(i);
    myvec.push_back(n);

    return myvec;
}

/// Optimized naive approach
vector<int> OgetFactors(int n)
{
    vector<int> myvec;
    myvec.push_back(1);
    if(n==1) return myvec;

    if(isPrime(n)){
         myvec.push_back(n);
         return myvec;
    }

    for(int i=2; i<=sqrt(n); i++)
        if(n%i == 0){
            myvec.push_back(i);
            if(i != (n/i))
                myvec.push_back(n/i);
        }
    myvec.push_back(n);

    return myvec;
}

int main()
{
    sieve();
    int n = 36;
    cout<<isPrime(17)<<" "<<isPrime(36)<<endl;
    vector<int> factors;
    factors = getFactors(n);

    vector<int> Ofactors;
    Ofactors = OgetFactors(n);
    sort(Ofactors.begin(),Ofactors.end());

    for(auto i = factors.begin(); i<factors.end(); i++)
        cout<<*i<<" ";
    cout<<endl;

    for(auto i = Ofactors.begin(); i<Ofactors.end(); i++)
        cout<<*i<<" ";
    cout<<endl;

    return 0;
}
