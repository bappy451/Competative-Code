#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        bool flag = true;
        char temp;

        for(int i=0;i<n; i++)
            for(int k=0;k<m; k++)
            {
                cin>>temp;
                if((temp == 'W' || temp == 'B' || temp == 'G') && flag) continue;
                else flag = false;
            }
        if(flag) cout<<"#Black&White"<<endl;
        else cout<<"#Color"<<endl;
    }

    return 0;
}
