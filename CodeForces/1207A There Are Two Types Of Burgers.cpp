#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int b,p,f;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        int temp = 0,res = 0;
        if(c>h){
            temp = f*2;
            while(b>1 && temp>0){
                res += c;
                b -= 2;
                temp -= 2;
            }
            temp = p*2;
            while(b>1 && temp>0){
                res += h;
                b -= 2;
                temp -= 2;
            }
        }else{
            temp = p*2;
            while(b>1 && temp>0){
                res += h;
                b -= 2;
                temp -= 2;
            }

            temp = f*2;
            while(b>1 && temp>0){
                res += c;
                b -= 2;
                temp -= 2;
            }
        }

        cout<<res<<endl;
    }
    return 0;
}
