#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int f[m];
        for(int i=0; i<m; i++)
            cin>>f[i];
        sort(f,f+m);
        int temp = n-1,k=0;
        int res = 100000000,res1;

        while(temp<m)
        {
            res1 = f[temp++] - f[k++];
            if(res > res1) res = res1;
        }
        cout<<res<<endl;
    }

    return 0;
}
