#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        string str;
        cin>>str;
        int A=0, D=0;
        for(int k=0; k<n; k++)
        {
            if(str[k]=='A') A++;
            else D++;
        }
        if(A>D) cout<<"Anton"<<endl;
        else if(D>A) cout<<"Danik"<<endl;
        else cout<<"Friendship"<<endl;
    }

    return 0;
}
