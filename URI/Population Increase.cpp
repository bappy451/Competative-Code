#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t=0;
    int pa,pb;
    double g1,g2;
    cin>>t;
    while(t--)
    {
        cin>>pa>>pb>>g1>>g2;
        int res = 0;
        while(pa <= pb)
        {
            pa *= (g1/100.0) + 1.0;
            pb *= (g2/100.0) + 1.0;
            res++;
            if(res>100){
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
        }
        if(res <= 100)cout<<res<<" anos."<<endl;


    }

    return 0;
}
