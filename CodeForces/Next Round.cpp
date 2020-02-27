#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int arr[n+2];
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        int temp = arr[k];
        int temp1=0;
        for(int i=1; i<=n; i++)
        {
            if(arr[i] == 0)
            {
                break;
            }
            else if(arr[i]>=temp)
            {
                temp1++;
            }
        }
        cout<<temp1<<endl;
    }

    return 0;
}
