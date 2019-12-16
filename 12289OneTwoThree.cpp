#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  t,n;
    cin>>t;
    string mystr;
    getline (cin,mystr);
    while(t)
    {
        getline (cin,mystr);
        n = mystr.length();

        if(n==3)
        {
            if(mystr[0]=='o' && mystr[1]=='n' || mystr[1]=='e')cout<<1<<endl;
            else if(mystr[0]=='o' || mystr[1]=='n' && mystr[1]=='e')cout<<1<<endl;
            else if(mystr[0]=='o' && mystr[1]=='e' || mystr[1]=='n')cout<<1<<endl;
            else if(mystr[0]=='t' || mystr[1]=='w' && mystr[1]=='o')cout<<2<<endl;
            else if(mystr[0]=='t' && mystr[1]=='w' || mystr[1]=='o')cout<<2<<endl;
            else if(mystr[0]=='t' && mystr[1]=='o' || mystr[1]=='w')cout<<2<<endl;
        }

        else
            cout<<3<<endl;

        t--;
    }

    return 0;
}
