#include<bits/stdc++.h>
using namespace std;


int main()
{
    string guest, host, pile;
    while(cin>>guest>>host>>pile)
    {
        string str = guest+host;
        sort(pile.begin(),pile.end());
        sort(str.begin(),str.end());
        //cout<<str<<endl;;
        //cout<<pile<<endl;
        if(pile == str) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
