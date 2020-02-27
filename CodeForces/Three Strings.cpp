#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        int len = a.length();
        bool flag[len];
        bool flag1=true;
        for(int i=0; i<len; i++)
        {
            if(a[i] == c[i] || b[i] == c[i]) flag[i] = true;
            else flag[i] = false;
        }
        for(int i=0;i<len; i++) if(!flag[i]) flag1 = false;
        if(flag1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
