#include<bits/stdc++.h>
using namespace std;

int main()
{
    int so,des;
    while(cin>>so>>des)
    {
        if(so==-1||des==-1) break;
        else
        {
            int f,m,temp;
            f = abs(so-des);
            if(des>so)
            {
                m = (100-des) + so;
            }
            else
                m = (100-so) + des;
            if(f>m) cout<<m<<endl;
            else
                cout<<f<<endl;

        }
    }

    return 0;
}
