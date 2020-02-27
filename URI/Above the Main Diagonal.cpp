#include<bits/stdc++.h>
using namespace std;


int main()
{
    char O;
    double arr[12][12];
    while(cin>>O)
    {
        double temp = 0.0;
        int counter=0;
        for(int i=0; i<12; i++)
            for(int j=0; j<12; j++)
                cin>>arr[i][j];
        for(int i=0; i<12; i++)
            for(int j=i+1; j<12; j++)
            {
                temp += arr[i][j];
                counter++;
            }
        //cout<<"counter: "<<counter<<endl;
        if(O=='S') cout<<fixed<<setprecision(1)<<temp<<endl;
        else cout<<fixed<<setprecision(1)<<temp/counter<<endl;
    }


    return 0;
}
