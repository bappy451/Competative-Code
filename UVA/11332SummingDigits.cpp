#include<bits/stdc++.h>
using namespace std;

int summer(long n)
{
    int res=0,tem=0;
    do
        {
            tem = n%10;
            res += tem;
            //cout<<res<<endl;
            n /= 10;
        }while(n);
    return res;
}

int main()
{
    long n=0;
    while(cin>>n)
    {
        if(n<=0) break;
        bool flag = false;
        if(n<10)
            cout<<n<<endl;
        else
        {
            flag = true;
            while(flag)
            {
                n=summer(n);
                if(n<10)
                {
                    cout<<n<<endl;
                    flag = false;
                }
            }
        }
    }

    return 0;
}

