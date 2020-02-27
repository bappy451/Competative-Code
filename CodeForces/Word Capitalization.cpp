#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        int len = str.length();
        transform(str.begin(),(str.begin()+1), str.begin(),::toupper);
        cout<<str<<endl;
    }

    return 0;
}
