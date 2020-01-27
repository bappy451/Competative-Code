#include<bits/stdc++.h>
using namespace std;;

int main()
{
    long long k,n,w;
    while(cin>>k>>n>>w)
    {
        long long res = 0;
        res = w*(w+1);
        res /=2;
        res *= k;
        res -= n;
        if(res>0) cout<<res<<endl;
        else cout<<0<<endl;
    }

    return 0;
}
