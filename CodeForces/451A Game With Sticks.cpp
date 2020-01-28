#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=0,m=0;
    while(cin>>n>>m)
    {
        int counter=0;
        while(n >= 0 && m >= 0)
        {
            counter++;
            n--;
            m--;

        }
        if(counter%2 == 0) cout<<"Akshat"<<endl;
        else cout<<"Malvika"<<endl;
    }

    return 0;
}
