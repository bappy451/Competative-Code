#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,t=0,res=0;
    cin>>t;
    while(t--)
    {
        i++;
        int temp;
        bool flag = true;
        for(int j=0; j<3; j++)
        {
            cin>>temp;
            if(temp > 20)
            {
                flag = false;
            }
        }
        if(flag)
            cout<<"Case "<<i<<": "<<"good"<<endl;
        else
            cout<<"Case "<<i<<": "<<"bad"<<endl;
        flag = true;
    }

    return 0;
}
