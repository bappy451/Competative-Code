#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,y=0,z=0,t;
    double res;
    cin>>t;
    if(t>0)
        cin>>x>>y>>z;
    for(int i=1; i<t && t>1; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x+=a;y+=b;z+=c;
    }
    res = x*x+y*y+z*z;
    res = sqrt(res);
    if(res==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
