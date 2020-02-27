#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    string str;
    while(cin>>n>>t)
    {
        cin>>str;
        char B = 'B';
        char G = 'G';
        int len = str.length();
        for(int i=0; i<t; i++)
        {
            vector<int> pos;
            for(int k=0; k<len-1; k++)
            {
                if(B == str[k] && G ==str[k+1]){
                    str[k] = G;
                    pos.push_back(k+1);
                }
            }
            for(auto i = pos.begin(); i<pos.end(); i++)
            {
                str[*i] = B;
            }
        }
        cout<<str<<endl;
    }

    return 0;
}
