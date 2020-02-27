#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[1000005];
    int kase = 0,q;
    while(scanf("%s %d", &arr, &q)==2)
    {
        kase++;
        cout<<"Case "<<kase<<":"<<endl;
        int a,b;
        while(q--)
        {
            cin>>a>>b;
            bool flag = true;
            if(a>b)
            {
                int temp = b;
                b=a;
                a=temp;
            }
            for(int i=a; i<b; i++)
            {
                if(arr[i] != arr[i+1])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }

    return 0;
}
