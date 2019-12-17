#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n; i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }
        int res = 0,temp;
        for(int i=0;i<n;i++)
        {
            temp = a[i]*c[i];
            res += temp;
        }
        cout<<res<<endl;
    }

    return 0;
}
