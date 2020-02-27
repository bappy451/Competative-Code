#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    while(cin>>s>>n)
    {
        int duals[n][2];
        for(int i=0; i<n; i++)
            for(int k=0;k<2;k++)
                cin>>duals[i][k];
        for(int i=0; i<n-1; i++)
            for(int k=i+1;k<n;k++)
            {
                if(duals[i][0]>duals[k][0]){
                    swap(duals[i][0],duals[k][0]);
                    swap(duals[i][1],duals[k][1]);
                }
            }
        /*for(int i=0; i<n; i++)
            for(int k=0;k<2;k+=2)
                cout<<duals[i][k]<<" "<<duals[i][k+1]<<"\t";
        cout<<endl;*/
        bool flag = true;
        for(int i=0; i<n && flag; i++){
            if(s>duals[i][0]){
                s += duals[i][1];
                //cout<<s<<endl;
            }
            else flag = false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
