#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n=str.length();
        if(str[n-1]=='o') cout<<"FILIPINO"<<endl;
        if(str[n-1]=='u') cout<<"JAPANESE"<<endl;
        if(str[n-1]=='a') cout<<"KOREAN"<<endl;
    }
    return 0;
}
