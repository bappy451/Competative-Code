#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,t=0,res=0;
    while(true)
    {
        cin>>t;
        if(t==0) break;
        i++;
        int z=0,o=0,temp;

        for(int j=0; j<t; j++)
        {
            cin>>temp;
            if(temp==0) z++;
            else o++;
        }
        res = o-z;
        cout<<"Case "<<i<<": "<<res<<endl;
    }

    return 0;
}
