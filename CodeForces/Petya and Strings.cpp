#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        transform(a.begin(),a.end(),a.begin(),::tolower);
        transform(b.begin(),b.end(),b.begin(),::tolower);
        int i = a.compare(b);
        cout<<i<<endl;
    }

    return 0;
}
