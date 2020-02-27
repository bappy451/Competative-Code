#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        //if(a==b) cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
        if(a<b)
            cout<<"O JOGO DUROU "<<b-a<<" HORA(S)"<<endl;
        else{
            int temp = 24-a;
            cout<<"O JOGO DUROU "<<temp+b<<" HORA(S)"<<endl;
        }
    }

    return 0;
}
