#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        bool flag = true;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x==1 && flag) flag = false;
        }
        if(flag) cout<<"EASY"<<endl;
        else cout<<"HARD"<<endl;
    }

    return 0;
}
