#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=0;
    while(cin>>n)
    {
        if(n==0) break;
        /*if(n==1){
            cout<<1<<endl<<endl;
            continue;
        }*/
        int arr[n][n];

        int last=n;

        for(int i=0; i<n; i++)
        {
            for(int j=i,k=1; j<n; j++)
            {
                arr[i][j] = k;
                arr[j][i] = k;
                k++;
            }
        }

        int la = n-1;
        for(int g=0; g<n; g++)
            {
                for(int h=0; h<n; h++)
                {
                    if(h==0)
                        printf("%3d",arr[g][h]);
                    else printf(" %3d",arr[g][h]);
                }
                printf("\n");
            }
            printf("\n");
    }

    return 0;
}
