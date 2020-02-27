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
        n = mystr.length();
        if(mystr=="1" || mystr=="4" || mystr=="78") cout<<"+"<<endl;
        else if(mystr[n-2]=='3' && mystr[n-1]=='5') cout<<"-"<<endl;
        else if(mystr[0]=='9' && mystr[n-1]=='4') cout<<"*"<<endl;
        else if(mystr[0]=='1' && mystr[1]=='9' && mystr[2]=='0') cout<<"?"<<endl;
        else
            cout<<"+"<<endl;
        t--;
    }

    return 0;
}

