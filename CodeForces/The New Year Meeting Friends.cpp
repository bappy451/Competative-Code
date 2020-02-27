#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    while(cin>>arr[0]>>arr[1]>>arr[2])
    {
        sort(arr,arr+3);
        int res=0;
        res = arr[1]-arr[0];
        res += (arr[2] - arr[1]);
        cout<<res<<endl;
    }

    return 0;
}
