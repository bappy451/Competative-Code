#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    while(cin>>str)
    {
        int len = str.length();
        set<char> d_char;
        for(int i=0; i<len; i++)
            d_char.insert(str[i]);
        int d = d_char.size();

        if(d%2 != 0) cout<<"IGNORE HIM!"<<endl;
        else cout<<"CHAT WITH HER!"<<endl;
    }

    return 0;
}
