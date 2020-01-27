#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    while(cin>>str)
    {
        int len = str.length();
        bool flag = false;
        for(int i=0; i<len; i++)
        {
            if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
            {
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
