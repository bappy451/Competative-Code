#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str1,str2;
    while(cin>>str1>> str2)
    {
        int len = str1.length();
        char str[len];
        for(int i=0; i<len; i++)
        {
            if(str1[i] == str2[i])cout<<0;
            else cout<<1;
        }
        cout<<endl;

    }

    return 0;
}
