#include<bits/stdc++.h>
using namespace std;

#define s 10000000
bool mark[s];

void siev()
{
    for(int i=3; i*i<s; i+=2)
        if(!mark[i])
        for(int k = i*i; k<s; k+=i)
            mark[k] = true;
}

bool isPrime(long long n)
{
    if(n<2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;
    else return !mark[n];
}

bool isPerfectSquare(long long n)
{
    long double d = sqrt(n);

    return ((d - floor(d)==0));
}

int main()
{
    int n;
    siev();
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            bool flag = false;
            long long temp;
            cin>>temp;
            if(isPerfectSquare(temp)){
                long long sq = sqrt(temp);
                if(isPrime(sq))
                   flag = true;
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
