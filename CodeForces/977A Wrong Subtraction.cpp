#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=0,k=0;
    while(cin>>n>>k)
    {
        for(int a=0; a<k; a++)
        {
            if(n%10==0) n /= 10;
            else n--;
        }
        cout<<n<<endl;
    }

    return 0;
}
