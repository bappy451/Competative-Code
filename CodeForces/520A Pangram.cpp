#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    string str;
    while(cin>>n)
    {
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        //int len = str.length();
        set<char> myset;
        for(int k=0; k<n; k++)
            myset.insert(str[k]);
        if(myset.size() == 26) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
