#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t=0,a[3],D;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>D;
        sort(a,a+3);
        long long _max = a[2];
        long long c = _max - a[0] - a[1] + _max;
        c = D-c;
        if(c%3==0 && c>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
