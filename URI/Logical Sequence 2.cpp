#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        int i;
        for(i=1; i<=y; i++)
        {
            if(i%x == 0) cout<<i<<endl;
            else cout<<i<<" ";
        }
        //if(i%x != 0)cout<<endl;
    }


    return 0;
}
