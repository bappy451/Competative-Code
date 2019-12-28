#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int arr[20];
        int m=0,ju=0,n=0,temp;
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        for(int j=0;j<n;j++)
        {
            temp = arr[j];
            while(temp>29)
            {
                m += 10;
                temp -=  30;
            }
            m += 10;
        }
        for(int j=0;j<n;j++)
        {
            temp = arr[j];
            while(temp>59)
            {
                ju+=15;
                temp -=  60;
            }
            ju+=15;
        }
        if(ju<m) cout<<"Case "<<i<<": Juice "<<ju<<endl;
        else if(m<ju)cout<<"Case "<<i<<": Mile "<<m<<endl;
        else
            cout<<"Case "<<i<<": Mile Juice "<<m<<endl;
    }

    return 0;
}
