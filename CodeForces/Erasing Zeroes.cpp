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
        int len = str.length();
        int counter=0,res=0;
        bool flag1 = false, flag2 = false;
        for(int i=0; i<len; i++)
        {
            if(str[i] == '1') flag1 = true;

            if(str[i] == '1' && str[i-1]=='0' && flag1) flag2 = true;
            if(str[i] == '0' && flag1) counter++;

            if(flag1 && flag2){
                res += counter;
                flag2 = false;
                counter = 0;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
