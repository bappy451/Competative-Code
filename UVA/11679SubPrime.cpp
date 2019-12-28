#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,n;
    int owes[20];
    while(cin>>b>>n)
    {
        if(b==0 || n==0) return 0;
        for(int i=0; i<b;i++)
        {
            cin>>owes[i];
        }
        int owe, won, amount;
        while(n--)
        {
            cin>>owe>>won>>amount;
            owes[owe-1] -= amount;
            owes[won-1] += amount;
        }
        bool flag = true;
        for(int i=0; i<b; i++)
        {
            //cout<<owes[i]<<"\t";
            if(owes[i]<0)
            {
                //cout<<"here";
                flag = false;
            }
        }
        if(flag) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }

    return 0;
}
