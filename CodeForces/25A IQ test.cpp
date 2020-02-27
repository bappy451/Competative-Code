#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        int even = 0, odd = 0;
        int p_even = 0, p_odd = 0;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            if(x%2 == 0){
                even++;
                p_even = i;
            }
            else{
                odd++;
                p_odd = i;
            }
        }
        if(even>odd) cout<<p_odd<<endl;
        else cout<<p_even<<endl;
    }

    return 0;
}
