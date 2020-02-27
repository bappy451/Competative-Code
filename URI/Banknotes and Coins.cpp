#include<bits/stdc++.h>
using namespace std;



int main()
{
    long double n;
    while(cin>>n)
    {
        int h100=0, f50=0, t20=0, t10=0, f5=0, t2=0, o1=0,pf5=0, ptf25=0, po1=0, pzf5=0, pzo1=0;
        while(n>=0.009){
            if(n>=100){
                n -= 100;
                h100++;
            }
            else if(n>=50){
                n -= 50;
                f50++;
            }
            else if(n>=20){
                n -= 20;
                t20++;
            }
            else if(n>=10){
                n -= 10;
                t10++;
            }
            else if(n>=5){
                n -= 5;
                f5++;
            }
            else if(n>=2){
                n -= 2;
                t2++;
            }
            else if(n>=1){
                n -= 1;
                o1++;
            }
            else if(n>=.50){
                n -= .50;
                pf5++;
            }
            else if(n>=.25){
                n -= .25;
                ptf25++;
            }
            else if(n>=.1){
                n -= .1;
                po1++;
            }
            else if(n>=.04999){
                n -= .05;
                pzf5++;
            }
            else if(n>=0.009999){
                n -= 0.01;
                pzo1++;
            }
        }
        cout<<"NOTAS:"<<endl;
        cout<<h100<<" nota(s) de R$ 100.00"<<endl;
        cout<<f50<<" nota(s) de R$ 50.00"<<endl;
        cout<<t20<<" nota(s) de R$ 20.00"<<endl;
        cout<<t10<<" nota(s) de R$ 10.00"<<endl;
        cout<<f5<<" nota(s) de R$ 5.00"<<endl;
        cout<<t2<<" nota(s) de R$ 2.00"<<endl;
        cout<<"MOEDAS:"<<endl;
        cout<<o1<<" moeda(s) de R$ 1.00"<<endl;
        cout<<pf5<<" moeda(s) de R$ 0.50"<<endl;
        cout<<ptf25<<" moeda(s) de R$ 0.25"<<endl;
        cout<<po1<<" moeda(s) de R$ 0.10"<<endl;
        cout<<pzf5<<" moeda(s) de R$ 0.05"<<endl;
        cout<<pzo1<<" moeda(s) de R$ 0.01"<<endl;
    }

    return 0;
}
