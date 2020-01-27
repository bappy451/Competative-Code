#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    while(cin>>str)
    {
        int len = str.length();
        vector<int> vec;
        for(int i=0; i<len; i+=2)
        {
            int a = (int) str[i];
            a-=48;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        for(auto i=vec.begin(); i<vec.end()-1; i++)
        {
            cout<<*i<<"+";
        }
        cout<<*(vec.end()-1)<<endl;
    }

    return 0;
}
