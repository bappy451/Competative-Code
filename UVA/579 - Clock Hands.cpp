#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    while(cin>>str)
    {
        double hr=0, mi=0;
        double temp=0, res=0;
        int i=0;
        while(str[i] != ':')
        {
            int temp1;
            temp1 = (int) str[i];
            temp1 -= 48;
            hr = hr*10 + temp1;
            i++;
        }
        while(str[i] != '\0')
        {
            if(str[i]==':') {
                i++;
                continue;
            }
            int temp1;
            temp1 = (int) str[i];
            temp1 -= 48;
            mi = mi*10 + temp1;
            i++;
        }
        //cout<<hr<<" "<<mi<<endl;
        if(hr==0 && mi == 0)  break;
        res = hr*30 + (mi/60)*30;
        temp = mi*6;
        res = abs(res - temp);
        if(res<0) res *=-1;
        if(res>180) res = 360-res;
        cout<<fixed<<setprecision(3)<<res<<endl;

    }


    return 0;
}
