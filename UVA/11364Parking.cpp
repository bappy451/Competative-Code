#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,res;
        vector<int> vec;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int j;
            cin>>j;
            vec.push_back(j);
        }
        sort(vec.begin(), vec.end());
        //cout<<vec.at(0)<<"   "<<vec.at(n-1)<<endl;

        res = vec.at(n-1)-vec.at(0);
        cout<<res*2<<endl;
    }


    return 0;
}
