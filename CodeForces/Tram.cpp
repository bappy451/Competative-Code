#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t=0;
    while(cin>>t)
    {
        int res=0;
        int temp=0;
        for(int i=0; i<t; i++)
        {
            int x=0,y=0;
            cin>>x>>y;
            temp -= x;
            temp += y;
            if(temp > res) res = temp;
        }
        cout<<res<<endl;
    }

    return 0;
}
