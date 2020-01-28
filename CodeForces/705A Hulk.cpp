#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        string odd = "I hate";
        string even = "I love";
        string concat = " that ";
        string en = " it";

        for(int i=1;i<=n; i++)
        {
            if(i%2==1) cout<<odd;
            if(i%2==0) cout<<even;
            if(n!=1 && i<n) cout<<concat;
            //else break;
        }
        cout<<en<<endl;
    }

    return 0;
}
