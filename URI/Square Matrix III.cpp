#include<bits/stdc++.h>
using namespace std;

int dg(int x)
{
    int a=x,b=0;
    while(a)
    {
        a/=10;
        b++;
    }
    return b;
}

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
            for(int j=0; j<n; j++)
            {
                int temp = i+j;
                arr[i][j] = pow(2,temp);
            }
        }

        int i=0,j=0,N,a,b,c=1,x,y=0,I,d,e=0,f,g,h;
        N = n;
        d=dg(arr[I][I]);
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==0)
                    {
                        h=arr[i][j];
                        e=dg(h);
                        g=d-e;
                        for(f=1;f<=g; f++)
                            printf(" ");
                        printf("%d",arr[i][j]);
                    }
                    else
                    {
                        h=arr[i][j];
                        e=dg(h);
                        g=d-e;
                        for(f=1;f<=g; f++)
                            printf(" ");
                        printf(" %d",arr[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
    }

    return 0;
}

