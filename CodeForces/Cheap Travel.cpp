#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,b;
    double a;
    while(cin>>n>>m>>a>>b)
    {
        int cost = 0, n_sp = 0;
        double s_sp = 0.0;
        s_sp = b/m;
        if(m>=n && b<(a*n)){
            cout<<b<<endl;
            continue;
        }
        else if(s_sp<a){
            n_sp = n%m;
            cost = (n/m) * b;
            //cout<<n_s<<endl;
        }
        else{
            cost = a*n;
        }
        if(b<a && n_sp){
            cost += b;
            n_sp = 0;
        }
        else{
            cost += (n_sp*a);
            n_sp = 0;
        }
        cout<<cost<<endl;
    }

    return 0;
}
