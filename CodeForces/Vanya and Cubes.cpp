#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        int res = 0;
        int f_res = 0;
        int i;
        for( i=0; ;i++){
            res += i;
            f_res += res;
            if(f_res == n) break;
            else if(f_res>n) {
                i--;
                break;
            }
        }
        //cout<<res<<endl;
        cout<<i<<endl;
    }

    return 0;
}
