#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n+1];
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        for(int i=1; i<=n; i++)
            for(int k=1; k<=n; k++){
                if(i==arr[k]) cout<<k<<" ";
            }
        cout<<endl;
    }


    return 0;
}
