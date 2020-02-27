#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    while(cin>>n>>m){
        int res = n;
        int temp = 0;
        while((temp+m)<= res)
        {
            temp += m;
            res++;
        }
        cout<<res<<endl;
    }

    return 0;
}
