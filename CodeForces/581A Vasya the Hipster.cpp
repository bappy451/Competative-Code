#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<min(a,b);
        int temp = max(a,b) - min(a,b);
        cout<<" "<<temp/2<<endl;
    }
    return 0;
}
