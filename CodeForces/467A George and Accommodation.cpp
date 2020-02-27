#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int x,y,res=0;
        for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            if(y-x>=2) res++;
        }
        cout<<res<<endl;
    }

    return 0;
}
