#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long k,n;
    while(cin>>k>>n)
    {
        long long temp;
        if(k % 2 ==0) temp = k/2;
        else temp = (k+1)/2;
        //long long pos = 0;
        if(n>temp){
            long long len = n-temp;
            long long num = len*2;
            cout<<num<<endl;

        }
        else{
            long long num = n*2 - 1;
            cout<<num<<endl;
        }

    }

    return 0;
}
