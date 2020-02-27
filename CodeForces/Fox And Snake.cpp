#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        bool flag = true;
        for(int i=1; i<=n; i++){
            if(i%2 == 1){
                for(int k=1; k<=m; k++)
                    cout<<"#";
                cout<<endl;
            }
            else if(i%2 == 0 && flag){
                int k;
                for(k=1; k<m; k++)
                    cout<<".";
                cout<<"#"<<endl;
                flag = false;
            }
            else if(i%2 == 0 && !flag){
                int k;
                cout<<"#";
                for(k=1; k<m; k++)
                    cout<<".";
                cout<<endl;
                flag = true;
            }
        }
    }

    return 0;
}
