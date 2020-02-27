#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c,counter=0;
    while(cin>>n>>m>>c,n && m && c)
    {
        counter++;
        int ci[n];
        int op[m];
        for(int i=0; i<n; i++)
            cin>>ci[i];
        for(int i=0;i<m; i++)
            cin>>op[i];
        int temp,res = 0,ma = -1;
        set<int> myset;
        for(int i=0; i<m; i++)
        {
            temp = op[i];
            if(myset.find(temp)!=myset.end())
            {
                res -= ci[temp-1];
                myset.erase(myset.find(temp));
            }
            else{
                myset.insert(temp);
                res += ci[temp-1];
            }
            if(res>ma) ma=res;
            /*for(auto i=myset.begin(); i!=myset.end(); i++)
                cout<<"    "<<*i<<"~~~"<<res<<"~~   ";
            cout<<endl;*/
        }
        //if(counter>1)
        cout<<"Sequence "<<counter<<endl;
        if(ma>c)
            cout<<"Fuse was blown."<<endl;
        else cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<ma<<" amperes."<<endl;
        cout<<endl;
    }

    return 0;
}
