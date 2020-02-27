#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=0;
    while(cin>>n)
    {
        long double res=0.0,total=0.0,temp=0.0;
        for(int i=0; i<n;i++){
            cin>>temp;
            total += temp;
        }
        //cout<<total<<endl;
        res = total/n;
        //printf("%.12Lf\n",res);
        cout<<fixed<<setprecision(12)<<res<<endl;

    }

    return 0;
}
