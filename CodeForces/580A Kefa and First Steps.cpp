#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int cou = 0,res=0;
        int pre = 0;
        for(int i=0; i<n; i++)
        {
            int temp=0;
            cin>>temp;
            if(temp>=pre){
                cou++;
                pre = temp;
            }
            else{
                pre = temp;
                cou = 1;
            }
            if(cou>res) res = cou;
        }
        cout<<res<<endl;
    }

    return 0;
}
