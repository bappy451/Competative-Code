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
        double d = n/2.0;
        int mid = ceil(d);

        int marker=0, last=n-1, value=0;;

        for(int i=0; i<=last; i++)
        {
            value++;
            for(int j=i; j<=last; j++)
            {
                arr[i][j] = value;
                arr[j][i] = value;
                arr[last][j] = value;
                arr[j][last] = value;
            }
            last--;
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
