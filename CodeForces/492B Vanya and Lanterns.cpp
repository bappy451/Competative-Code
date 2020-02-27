#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,l;
    while(cin>>n>>l)
    {
        long long arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];

        sort(arr, arr+n);
        double D = 0, d=0;
        for(int i=0; i<n-1; i++)
        {
            if((arr[i+1]-arr[i])>D) D = (arr[i+1]-arr[i]);
        }
        //cout<<D<<endl;
        if(arr[0] != 0 || arr[n-1] != l)
        {
            if(arr[0] != 0 && ((arr[0] - 0)*2)>D) {
                d = arr[0] - 0;
            //cout<<fixed<<setprecision(10)<<D<<endl;
            }
            if(arr[n-1] != l && (l - arr[n-1])>d){
                d = l - arr[n-1];
            }
            //cout<<fixed<<setprecision(10)<<D<<endl;
        }

        D = D/2;
        D = max(D,d);
        cout<<fixed<<setprecision(10)<<D<<endl;
    }

    return 0;
}

