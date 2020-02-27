#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int arr[50];
        int high=0,low=0,n;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        if(n==1) cout<<"Case "<<i<<": "<<0<<" "<<0<<endl;
        else
        {
            for(int j=0; j<n-1; j++)
            {
                if(arr[j]<arr[j+1]) high++;
                else if(arr[j]>arr[j+1]) low++;
            }
            cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
        }
    }

    return 0;
}
