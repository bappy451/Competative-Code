#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    while(cin>>n>>t)
    {
        int temp = 0;
        if(n==1) temp = 1;
        if(n>=2){
            temp = 10;
            n -= 2;
        }
        while(n){
            temp *= 10;
            n--;
        }
        int res = 0;
        while(res<temp){
            res += t;
        }
        cout<<res<<endl;
    }

    return 0;
}
