#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        int a,b,c,res=0;
        while(n--)
        {
            cin>>a>>b>>c;
            if(a==1 && b==1 && c==1)
                res++;
            else if(a==1 && b==1 && c==0)
                res++;
            else if(a==1 && b==0 && c==1)
                res++;
            else if(a==0 && c==1 && b==1)
                res++;
        }
        cout<<res<<endl;
    }

    return 0;
}
