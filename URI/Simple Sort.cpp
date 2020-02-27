#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[3];
    while(cin>>a[0]>>a[1]>>a[2])
    {
        if(a[0]>=a[1] && a[0] >= a[2])
        {
            if(a[1]>=a[2]){
                cout<<a[2]<<endl<<a[1]<<endl<<a[0];
            }
            else
                cout<<a[1]<<endl<<a[2]<<endl<<a[0];
        }
        else if(a[1]>=a[0] && a[1] >= a[2])
        {
            if(a[0]>=a[2]){
                cout<<a[2]<<endl<<a[0]<<endl<<a[1];
            }
            else
                cout<<a[0]<<endl<<a[2]<<endl<<a[1];
        }
        else{
            if(a[0]>=a[1]){
                cout<<a[1]<<endl<<a[0]<<endl<<a[2];
            }
            else
                cout<<a[0]<<endl<<a[1]<<endl<<a[2];
        }
        cout<<endl<<endl;
        for(int i=0;i<3;i++)
            cout<<a[i]<<endl;

    }


    return 0;
}
