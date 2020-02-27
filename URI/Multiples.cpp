#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a>=b){
            if(a%b == 0){
                cout<<"Sao Multiplos"<<endl;
                continue;
            }
        }
        if(a<b){
            if(b%a == 0){
                cout<<"Sao Multiplos"<<endl;
                continue;
            }
        }
        cout<<"Nao sao Multiplos"<<endl;
    }


    return 0;
}
