#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0,n=0,res, temp;
    cin>>t;
    while(t--)
    {
        bool flag = true;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            if(i==0) res = (a-b);
            else
            {
                temp=(a-b);
                if(res!=temp)
                {
                    flag = false;
                    //break;
                }
            }
        }
        if(flag)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        if(t)
            cout<<endl;
    }

    return 0;
}
