#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    while(cin>>t && t>0)
    {
        cin>>str;
        char c = str[0];
        int cou=0, res =0;
        for(int i=1; i<t; i++)
        {
            if(c == str[i]) cou++;
            else {
                c = str[i];
                //cou = 0;
            }
        }
        cout<<cou<<endl;
    }

    return 0;
}
