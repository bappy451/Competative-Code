#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=0;
    while(cin>>n)
    {
        int arr[n][2];
        for(int m = 0; m<n; m++)
            for(int k=0; k<2; k++)
            {
                cin>>arr[m][k];
            }
        int cou = 0;
        for(int m = 0; m<n; m++)
        {
            int away = arr[m][1];
            for(int k=0; k<n; k++)
            {
                if(away == arr[k][0]) cou++;
            }
        }
        cout<<cou<<endl;
    }

    return 0;
}
