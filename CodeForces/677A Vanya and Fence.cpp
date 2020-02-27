#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,h;
    while(cin>>n>>h)
    {
        int cou = 0;
        for(int i =0; i<n; i++)
        {
            int x=0;
            cin>>x;
            if(x>h) cou += 2;
            else cou++;
        }
        cout<<cou<<endl;
    }

    return 0;
}
