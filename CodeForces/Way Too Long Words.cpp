#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int t=0;
    cin>>t;
    while(t--)
    {
        int temp = 0;
        cin>>str;
        temp = str.length();
        //cout<<temp<<endl;
        if(temp>10)
        {
            //temp -=2
            cout<<str[0]<<temp-2<<str[temp-1]<<endl;
        }
        else
            cout<<str<<endl;
    }

    return 0;
}
