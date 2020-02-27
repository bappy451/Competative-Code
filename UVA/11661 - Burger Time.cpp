#include<bits/stdc++.h>
using namespace std;


int main()
{
    int l=0;
    while(cin>>l)
    {
        if(l==0) return 0;
        string road;
        cin>>road;
        int len = road.length();
        int d=-1,r=-1,res = l,temp=-1;
        for(int i=0; i<len; i++)
        {
            if(road[i] == 'Z'){
                res = 0;
                break;
            }
            if(road[i] == 'D') d = i;
            if(road[i] == 'R') r = i;
            if(d>=0 && r>=0) temp = abs(d-r);
            if(res>temp && temp>=0) res = temp;
        }
        cout<<res<<endl;
    }

    return 0;
}
