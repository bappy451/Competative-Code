#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    while(cin>>str)
    {
        int temp = str.length();
        vector<char> myvec;
        for(int i=0; i<temp; i++)
        {
            int p = str[i];
            char pp = str[i];
            //cout<<p<<endl<<pp<<endl<<char(pp+32)<<endl;
            if(p<97)
                pp = char(p+32);
            if(pp == 'a' || pp =='e' || pp == 'i' || pp == 'o' || pp == 'u' || pp == 'y')
                continue;
            else
            {
                myvec.push_back('.');
                myvec.push_back(pp);
            }
        }
        for(auto i = myvec.begin(); i<myvec.end(); i++)
            cout<<*i;
        cout<<endl;
    }

    return 0;
}
