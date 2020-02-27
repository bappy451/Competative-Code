#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int a,b,c,r,x,y;
        cin>>x>>y>>c>>r;
        a = min(x,y);
        b = max(x,y);
        int res = 0, temp1=0, temp2=0,temp=0;
        temp1 = c - r;
        temp2 = c + r;
        int temp3 = b - a;
        //cout<<a<<" b = "<<b<<endl;
        if(temp3==0) cout<<0<<endl;
        else if(a<c && c<b){
            if(a<temp1 && b>temp2){
                temp = r*2;
                res = temp3 - temp;
            }
            if(a>temp1 && a<temp2){
                a = max(temp2,a);
                if(a>b) res = 0;
                else res = b-a;
            }
            if(b<temp2 && b>temp1){
                b = max(temp1,b);
                if(a>b) res = 0;
                else res = b-a;
            }
            if(res>0)cout<<res<<endl;
            else cout<<0<<endl;
        }
        else if(a>=c){
            a = max(temp2,a);
            if(a>b) cout<<0<<endl;
            else cout<<b-a<<endl;
        }
        else if(c>=b){
            b = min(temp1,b);
            if(a>b) cout<<0<<endl;
            else cout<<b-a<<endl;
        }

        //cout<<res<<endl;
    }

    return 0;
}
