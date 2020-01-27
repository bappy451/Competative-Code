#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    while(cin>>t)
    {
        char arr[3];
        int res = 0;
        for(int i=0; i<t; i++)
        {
            cin>>arr[0]>>arr[1]>>arr[2];
            if(arr[0]=='+' || arr[1]=='+' || arr[2]=='+')
                res++;
            else res--;
        }
        cout<<res<<endl;
    }

    return 0;
}
