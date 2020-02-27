#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=0;
    while(cin>>n)
    {
        int group=0, temp = 0;
        for(int k=0; k<n; k++)
        {
            int x;
            cin>>x;
            if(temp != x){
                temp = x;
                group++;
            }
        }
        cout<<group<<endl;
    }

    return 0;
}
