#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        //int arr[n];
        int high=0, low = 200;
        int p_high=0, p_low = 0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x > high)
            {
                high = x;
                p_high = i;
            }
            if(x <= low){
                low = x;
                p_low = i;
            }
        }

        int counter = 0;
        if(p_high>p_low){
            int l = n - 1 - p_low;
            counter = p_high + l - 1;
        }
        else{
            int ll = n - 1 - p_low;
            counter = p_high + ll;
        }

        cout<<counter<<endl;
    }

    return 0;
}
