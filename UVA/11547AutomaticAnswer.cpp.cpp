#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int res;
        res = (((n*63)+7492)*5)-498;
        res = res%100;
        res = abs(res)/10;
        cout<<res<<endl;
    }

    return 0;
}
