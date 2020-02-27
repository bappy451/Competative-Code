#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    while(cin>>str)
    {
        string temp1, temp2;
        temp1 = str;
        temp2 = str;
        transform(temp1.begin(),temp1.end(),temp1.begin(),::toupper);
        transform(temp2.begin(),temp2.end(),temp2.begin(),::tolower);

        int up=0,lo=0;
        int len = str.length();
        for(int i=0;i<len; i++)
        {
            if(str[i] == temp1[i]) up++;
            if(str[i] == temp2[i]) lo++;
        }
        if(up>lo) cout<<temp1<<endl;
        else cout<<temp2<<endl;
    }

    return 0;
}
