#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int p;
        cin>>p;
        int temp=0;
        set<int> myset;
        for(int i=0;i<p;i++)
        {
            cin>>temp;
            myset.insert(temp);
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            cin>>temp;
            myset.insert(temp);
        }
        if(myset.size() == n) cout<<"I become the guy."<<endl;
        else cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}
