#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        int i=0;
        int len = str.length();
        vector<char> mychar;
        bool flag = false;
        while(str[i] != '\0')
        {
            if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
                i += 3;
                if(!mychar.empty() && flag)
                    mychar.push_back(' ');
                    flag = false;
            }
            else{
                mychar.push_back(str[i++]);
                flag = true;
            }
        }
        for(auto k = mychar.begin(); k<mychar.end(); k++)
            cout<<*k;
        cout<<endl;
    }

    return 0;
}
