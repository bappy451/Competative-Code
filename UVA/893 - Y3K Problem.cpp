#include<bits/stdc++.h>
using namespace std;

bool leapyear(long long n)
{
    if(n%400 == 0 || (n%100 !=0 && n%4==0))
        return true;
    else return false;
}

int main()
{
    long long n, dd, mm, yyyy;
    cout<<leapyear(2004);
    while(cin>>n>>dd>>mm>>yyyy)
    {
        long long temp = yyyy;
        if(n==0 && dd ==0 && mm == 0 && yyyy == 0) break;
        long long days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        while(n>365)
        {
            if(leapyear(temp)){
                temp++;
                n -= 366;
            }
            else{
                temp++;
                n-=365;
            }
        }
        if(n==365 && !leapyear(temp)){
            temp++;
            n -= 365;
        }

        dd += n;
        while(true){
            long long currMon = days[mm];
            if(mm==2 && leapyear(temp)) currMon = 29;
            if(dd > currMon){
                mm++;
                dd -= currMon;
                if(mm>12){
                    mm=1;
                    temp++;
                }
            }
            else break;
        }

        cout<<dd<<" "<<mm<<" "<<temp<<endl;
    }

    return 0;
}
