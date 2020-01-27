#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        char c;
        stack<char> s;
        int len = str.length();
        c = str[0];
        int den=0;
        bool flag = false;
        for(int i=0; i<len; i++)
        {
            if(str[i]==c){
                den++;
            }
            else{
                c = str[i];
                den = 1;
            }
            if(den>=7)
            {
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
