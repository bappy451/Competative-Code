#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;

        bool even = false;
        bool odd = false;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp%2 == 0) even= true;
            else odd = true;
        }

        if(even && odd) cout<<"YES"<<endl;
        else if(even && !odd) cout<<"NO"<<endl;
        else if((odd && !even) && (n%2==0)) cout<<"NO"<<endl;
        else if((odd && !even) && (n%2!=0)) cout<<"YES"<<endl;
    }

    return 0;
}
