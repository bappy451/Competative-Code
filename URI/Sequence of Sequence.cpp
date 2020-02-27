#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int cas = 1;
    while(cin>>n)
    {
        int temp = 1;
        cout<<"Caso "<<cas++;
        /*if(n==0) {
            cout<<": 1 numero"<<endl<<0<<endl;
            continue;
        }*/
        vector<int> myvec;
        myvec.push_back(0);
        for(int i=1; i<=n; i++)
            for(int j=1;j<=i; j++)
                myvec.push_back(i);

        int len = myvec.size();
        cout<<": "<<len<<" numeros"<<endl;
        for(auto i=myvec.begin(); i<myvec.end(); i++)
            cout<<*i<<" ";
        cout<<endl;
    }

    return 0;
}
