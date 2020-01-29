#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
        int temp = a;
        int res = a;
        while(temp >= b)
        {
            int t = temp%b;
            temp = temp/b;
            //cout<<temp<<" "<<t<<endl;
            res += temp;
            temp += t;
        }
        cout<<res<<endl;
    }

    return 0;
}
