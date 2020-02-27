#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        long long a[m];
        for(long long i=0; i<m; i++)
            cin>>a[i];
        long long p_xenia = 1;
        long long path = 0;
        for(long long i=0; i<m; i++)
        {
            if(p_xenia == a[i]) continue;
            else if(p_xenia < a[i]){
                path += (a[i] - p_xenia);
                p_xenia = a[i];
            }
            else if(p_xenia > a[i]){
                path += (n - p_xenia);
                path += (a[i]);
                p_xenia = a[i];
            }
        }
        cout<<path<<endl;
    }

    return 0;
}
