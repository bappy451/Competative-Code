#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,opp;
        cin>>n;
        if(n%12==0){
            opp = n-11;
            cout<<opp<<" WS"<<endl;
            continue;
        }
        int i=1;
        int lo = n/12;
        lo = lo*12 + 1;
        int hi = lo + 11;
        int pos = hi - n;
        opp = lo + pos;
        if(pos>5) {
            pos = n - lo;
            opp = lo + (11 - pos);
        }

        string seat;
        if(pos==0 || pos==5) seat = " WS";
        if(pos==1 || pos==4) seat = " MS";
        if(pos==2 || pos==3) seat = " AS";
        cout<<opp<<seat<<endl;
    }


    return 0;
}
