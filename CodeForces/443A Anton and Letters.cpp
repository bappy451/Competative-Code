#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    set<char> myset;
    char c='}';
    while(cin>>str)
    {
        int len = str.length();
        int i=0;
        while(i<len)
        {
            if(str[i] == '{' || str[i] == '}' || str[i] == ',' || str[i] == ' ')
            {
                i++;
                continue;
            }
            myset.insert(str[i]);
            i++;
        }
        if(str[1]==c || str[0]==c) break;

    }
    cout<<myset.size()<<endl;
    return 0;
}
