#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n = 0,p = 0,tem=0;
        string str[100];
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>str[i];
            if(str[i]=="LEFT") p--;
            else if(str[i]=="RIGHT") p++;
            else
            {
                cin>>str[i]>>tem;
                //str[i] = tem;
                //cout<<str[i]<<"\t"<<endl;
                //tem = str[i][0];
                //cout<<tem<<"\t"<<endl;
                tem--;
                if(str[tem]=="LEFT")
                {
                    p--;
                    str[i]="LEFT";
                }
                else if(str[tem]=="RIGHT")
                {
                    p++;
                    str[i]="RIGHT";
                }
            }


        }
        cout<<p<<endl;
    }

    return 0;
}
