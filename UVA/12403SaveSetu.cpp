#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  t,n,res=0;
    cin>>t;
    string mystr;
    //getline (cin,mystr);
    while(t)
    {
        cin>>mystr;
        if(mystr=="donate")
        {
            cin>>n;
            res += n;
        }
        else
        cout<<res<<endl;

        t--;
    }

    return 0;
}

