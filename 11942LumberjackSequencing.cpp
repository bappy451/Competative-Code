#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int t,temp=0;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        bool check[9];
        bool flag,flag1=true;
        for(int i=0; i<10; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<9; i++)
        {
            temp = arr[i]-arr[i+1];
            if(temp>0) check[i] = true;
            if(temp<0) check[i] = false;
            if(i==0)
            {
                if(temp>0) flag = true;
                if(temp<0) flag = false;
            }
        }
        for(int i=0; i<9; i++)
        {
            if(check[i]!=flag)
            {
                flag1 = false;
            }
        }
        if(flag1)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }

    return 0;
}
