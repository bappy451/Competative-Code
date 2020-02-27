#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    while(cin>>a[0]>>a[1]>>a[2])
    {
        //sort(a,a+3);
        int res[5];
        res[0] = a[0]+a[1]*a[2];
        res[1] = a[0]*(a[1]+a[2]);
        res[2] = a[0]*a[1]*a[2];
        res[3] = (a[0]+a[1])*a[2];
        res[4] = (a[0]+a[1])+a[2];
        sort(res,res+5);
        cout<<res[4]<<endl;
    }

    return 0;
}
