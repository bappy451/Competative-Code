#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        int coin[n];
        int sum = 0,taken=0;
        for(int i=0;i<n;i++){
            cin>>coin[i];
            sum += coin[i];
        }
        sort(coin, coin+n, greater<int>());
        //cout<<sum<<" "<< taken<<endl;
        double mid = (double)sum/2.0;
        int i;
        for( i=0; i<n; i++)
        {
            sum -= coin[i];
            taken += coin[i];
            if(taken>sum) break;
        }
        i++;
        //cout<<sum<<endl;
        cout<<i<<endl;
    }

    return 0;
}
