#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[4];
    while(cin>>arr[0]>>arr[1]>>arr[2]>>arr[3])
    {
        sort(arr,arr+4);
        int a = arr[0]+arr[3];
        int b = arr[1] + arr[2];
        int c = arr[0] + arr[1] + arr[2];
        if(a==b) cout<<"YES"<<endl;
        else if(arr[3] == c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
