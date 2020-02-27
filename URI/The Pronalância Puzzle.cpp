#include<bits/stdc++.h>
using namespace std;

void get_number_printed(long long n)
{
    if(n<10){
        cout<<n<<endl;
        return;
    }
    else{
        int temp = n%10;
        printf("%d",temp);
        return get_number_printed(n/10);
    }
}

int main()
{
    long long n;
    while(cin>>n)
    {
        get_number_printed(n);
    }


    return 0;
}
