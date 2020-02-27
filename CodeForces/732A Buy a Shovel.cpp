#include<bits/stdc++.h>
using namespace std;

int minimum(int k, int l)
{
    int min_num = 1;

    int last_dig = k%10;
    if(last_dig == l) return 1;
    if(last_dig==0) return 1;
    if(last_dig == 5) return 2;
    int total = k;
    while(last_dig != l)
    {
        total += k;
        last_dig = total%10;
        min_num++;
        if(last_dig == 0) return min_num;
    }

    return min_num;
}

int main()
{
    int k,l;
    while(cin>>k>>l)
    {
        cout<<minimum(k,l)<<endl;
    }

    return 0;
}
