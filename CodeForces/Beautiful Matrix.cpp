#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    int x=0,y=0;
    for(int i=1; i<6; i++)
        for(int j=1; j<6; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1){
                x=i;
                y=j;
            }
        }
    //int a,b;
    x-=3;
    x = abs(x);
    y-=3;
    y = abs(y);

    cout<<x+y<<endl;

    return 0;
}
