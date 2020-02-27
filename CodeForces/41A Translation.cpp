#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    while(cin>>str1>>str2)
    {
        int len = str1.length();
        char res[len+1];
        int k=0;
        for(int i=len-1; i>=0; i--)
        {
            res[k++] = str1[i];
        }
        res[k] = '\0';
        str1 = res;
        if(str1 == str2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
