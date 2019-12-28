#include<bits/stdc++.h>
using namespace std;


int main()
{
    double a,b,c;
    while(cin>>a>>b>>c && a&&b&&c)
    {
        long long res,temp1, temp2;
        temp1 = ceil(a/c);
        temp2 = ceil(b/c);
        cout<<temp1*temp2<<endl;
    }

    return 0;
}
