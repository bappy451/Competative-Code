#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h;
    double f,u,d;
    while(cin>>h>>u>>d>>f)
    {
        if(h<=0||u<=0||d<=0||f<=0) break;
        double inith = 0;
        double rate = u*(f/100);
        int c = 0;

        do
        {
            c++;
            inith += u;
            if(inith>h)
            {
                cout<<"success on day ";
                break;
            }
            inith -= d;
            if(inith<0)
            {
                cout<<"failure on day ";
                break;
            }
            u -= rate;
            if(u<0)
                u=0;

        }while(true);
        cout<<c<<endl;
    }

    return 0;
}
