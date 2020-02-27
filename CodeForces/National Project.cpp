#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t=0;
    cin>>t;
    while(t--)
    {
        long long n,g,b,res=0;
        cin>>n>>g>>b;
        long long hq = ceil(n/2);
        if(g>=b) res = n;
        else if(g>hq) res = n;
        else{
            long long bd = ceil(hq/g);
            if(bd>0) bd--;
            long long temp = hq + bd*b;
            res = temp;
        }
        cout<<res<<endl;
    }


    return 0;
}
