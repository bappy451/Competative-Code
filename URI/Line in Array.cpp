#include<bits/stdc++.h>
using namespace std;


int main()
{
    int l=0;
    char t;
    double arr[12][12];
    while(cin>>l>>t)
    {
        double temp =0.0;
        for(int i=0;i<12;i++)
            for(int j=0;j<12; j++)
                cin>>arr[i][j];
        for(int i=0; i<12;i++)
            temp += arr[l][i];
        if(t=='S') cout<<fixed<<setprecision(1)<<temp<<endl;
        else cout<<fixed<<setprecision(1)<<temp/12<<endl;
    }


    return 0;
}
