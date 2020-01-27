#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    while(cin>>str)
    {
        string temp = str;
        transform(temp.begin(), temp.end(), temp.begin(),::toupper);
        if(str == temp){
            transform(str.begin(), str.end(), str.begin(),::tolower);
            cout<<str<<endl;
            continue;
        }
        transform(temp.begin(), (temp.begin()+1), temp.begin(),::tolower);
        if(str == temp) {
            transform(str.begin(), str.end(), str.begin(),::tolower);
            transform(str.begin(), (str.begin()+1), str.begin(),::toupper);
            cout<<str<<endl;
            continue;
        }
        else cout<<str<<endl;
    }

    return 0;
}
