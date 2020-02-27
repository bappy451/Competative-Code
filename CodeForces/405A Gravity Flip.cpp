#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=0;
    while(cin>>n)
    {
        int arr[n];
        for(int k=0; k<n; k++)
            cin>>arr[k];
        sort(arr,arr+n);
        for(int k=0; k<n; k++)
            cout<<arr[k]<<" ";
        cout<<endl;
    }

    return 0;
}
