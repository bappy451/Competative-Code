#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n=0;
    while(cin>>n)
    {
        long long odd, even;
        if(n%2 == 0)
        {
            odd = n/2;
            even = n/2;
        }
        else{
            odd = ((n-1)/2) + 1;
            even = ((n-3)/2) + 1;
        }
        odd = odd*odd;
        even = even*even + even;
        cout<<even - odd<<endl;
    }

    return 0;
}
