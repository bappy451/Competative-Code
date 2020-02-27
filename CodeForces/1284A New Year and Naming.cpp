#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        string s[n],t[m];
        for(int i=0; i<n; i++)
            cin>>s[i];
        for(int i=0; i<m; i++)
            cin>>t[i];

        int q=0;
        cin>>q;
        for(int i=0; i<q; i++)
        {
            long long temp,ss,tt;
            cin>>temp;
            temp--;
            ss = temp%n;
            tt = temp%m;
            //cout<<ss<<" "<<tt;
            cout<<s[ss]<<t[tt]<<endl;
        }
    }

    return 0;
}
