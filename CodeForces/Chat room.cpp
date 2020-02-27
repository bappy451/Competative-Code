#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    while(cin>>str)
    {
        string hello = "hello";
        int cou = 0;
        char c = hello[cou];
        int len = str.length();
        for(int i=0; i<len && cou<=5; i++){
            if(c == str[i]){
                cou++;
                c = hello[cou];
            }
        }
        if(cou>=5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
