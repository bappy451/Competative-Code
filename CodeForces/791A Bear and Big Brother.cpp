#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a=0,b=0;
    while(cin>>a>>b)
    {
        int i;
        for(i=0; a<=b; i++)
        {
            a *= 3;
            b *= 2;
           // cout<<a<<"\t"<<b<<"\t"<<i<<endl;
        }
        cout<<i<<endl;
    }

    return 0;
}
