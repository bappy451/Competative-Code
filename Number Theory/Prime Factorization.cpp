#include<bits/stdc++.h>
using namespace std;

#define M 100000000
bool Mark[M];

void sieve()
{
    for(int i=3; i*i<=M; i+=2)
        if(!Mark[i])
        for(int k = i*i; k<=M; k+=i)
            Mark[k] = true;
}

bool isPrime(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    else
        return !Mark[n];
}

vector<int> primeFactorization(int n)
{
    vector<int> myvec;
    if(isPrime(n) || n==1){
        myvec.push_back(n);
        return myvec;
    }
    while(!isPrime(n))
    {
        for(int i=2; i<n; i++)
        if(isPrime(i) && n%i==0){
            myvec.push_back(i);
            n /= i;
            break;
        }
    }
    myvec.push_back(n);
    return myvec;
}

void PprimeFactorization(int n)
{
    if(isPrime(n) || n==1)cout<<n;
    else
    for(int i=2; n>1; i++){
        int cou = 0;
        while(n%i==0 && isPrime(i)){
            n /= i;
            cou++;
        }
        if(isPrime(i) && cou>0) cout<<i<<'^'<<cou<<" ";
    }

    cout<<endl;
}

int main()
{
    sieve();
    int n = 36;
    cout<<isPrime(7)<<endl;
    while(cin>>n)
    {
        vector<int> primeFactors;

        primeFactors = primeFactorization(n);

        for(auto i = primeFactors.begin(); i<primeFactors.end(); i++)
            cout<<*i<<" ";
        cout<<endl;
        PprimeFactorization(n);
    }


    return 0;
}
