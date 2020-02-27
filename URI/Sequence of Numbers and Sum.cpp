#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a<=0 || b<=0) break;
        if(a<b) swap(a,b);
        int sum =0;
        for(int i=b; i<=a; i++)
        {
            cout<<i<<" ";
            sum += i;
        }
        cout<<"Sum="<<sum<<endl;

    }

    return 0;
}
