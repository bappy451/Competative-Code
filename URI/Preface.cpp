#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a<0){
            cout<<a/b-1<<" "<<a%b+b<<endl;
        }
        else
            cout<<a/b<<" "<<a%b<<endl;
    }

    return 0;
}
