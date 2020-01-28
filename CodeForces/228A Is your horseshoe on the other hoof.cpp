#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    set<int> myset;
    for(int i=0; i<4; i++)
    {
        cin>>n;
        myset.insert(n);
    }
    cout<<4-myset.size()<<endl;
    return 0;
}
