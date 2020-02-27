#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n;
    while(cin>>n)
    {
        int cou = 0;
        while(n>0)
        {
            if(n%10 == 4 || n%10 == 7){
                cou++;
            }
            n /= 10;
        }
        //cout<<cou<<"  ";
        if((cou==4 || cou==7 || cou==47 || cou==77)&&(cou > 0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
