#include<bits/stdc++.h>
using namespace std;

int main()
{
    string mystr;
    int i=0;
    while(true)
    {
        i++;
        getline(cin, mystr);
        if(mystr == "#")
            break;
        //cout<<mystr<<endl;
        cout<<"Case "<<i<<": ";
        if(mystr == "HELLO")cout<<"ENGLISH"<<endl;
        else if(mystr == "HOLA")cout<<"SPANISH"<<endl;
        else if(mystr == "HALLO")cout<<"GERMAN"<<endl;
        else if(mystr == "BONJOUR")cout<<"FRENCH"<<endl;
        else if(mystr == "CIAO")cout<<"ITALIAN"<<endl;
        else if(mystr == "ZDRAVSTVUJTE")cout<<"RUSSIAN"<<endl;
        else
            cout<<"UNKNOWN"<<endl;

    }

    return 0;
}
