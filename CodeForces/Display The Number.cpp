#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        bool flag = false;
        if(n%2==1) {
            cout<<7;
            n -= 3;
        }
        while(n){
            cout<<1;
            n -= 2;
        }
        cout<<endl;
    }
}
