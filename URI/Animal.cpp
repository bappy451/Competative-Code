#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str1,str2,str3;
    while(cin>>str1>>str2>>str3)
    {
        if(str1=="vertebrado")
        {
            if(str2=="ave"){
                if(str3 == "carnivoro") cout<<"aguia"<<endl;
                else cout<<"pomba"<<endl;
            }
            else{
                if(str3 == "onivoro") cout<<"homem"<<endl;
                else cout<<"vaca"<<endl;
            }
        }
        else {
            if(str2 == "inseto"){
                if(str3 == "hematofago") cout<<"pulga"<<endl;
                else cout<<"lagarta"<<endl;
            }
            else{
                if(str3 == "onivoro") cout<<"minhoca"<<endl;
                else cout<<"sanguessuga"<<endl;
            }
        }
    }

    return 0;
}
