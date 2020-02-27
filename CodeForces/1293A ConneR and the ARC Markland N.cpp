#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long n,s,k;
        cin>>n>>s>>k;
        long long arr[k];
        for(long long i=0; i<k; i++)
            cin>>arr[i];
        sort(arr, arr+k);
        long long res = 0,pos1 = s, pos2 = s;
        bool flag = true;
        while(flag)
        {
            if(binary_search(arr,arr+k,pos1)==false && flag && pos1>0){
                cout<<res<<endl;
                flag=false;
            }
            if(binary_search(arr,arr+k,pos2)== false && flag && pos2<=n){
                cout<<res<<endl;
                flag = false;
            }
            res++;
            pos1--; pos2++;
        }
    }

    return 0;
}
