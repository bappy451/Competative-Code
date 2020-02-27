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
        bool flag1=true;
        for(int i=0; i<10; i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<9;i++)
        {
            check[i] = (arr[i]>=arr[i+1]);
            if(check[i]!=check[0])
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
