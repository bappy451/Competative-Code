#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n];
        int s=0;
        int high=0;
        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>high) high = arr[i];
        }
        for(int i=0;i<n;i++)
            s += (high-arr[i]);
        cout<<s<<endl;

    }

    return 0;
}
