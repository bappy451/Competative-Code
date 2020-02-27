#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        int free_police = 0;
        int untreated = 0;
        for(int i=0; i<n;i++)
        {
            int temp = 0;
            cin>>temp;
            if(temp<0 && free_police<=0) untreated++;
            else if(temp<0 && free_police>0) free_police--;
            else if(temp>0 && temp<=10) free_police += temp;
            else free_police += 10;
        }
        cout<<untreated<<endl;
    }

    return 0;
}
