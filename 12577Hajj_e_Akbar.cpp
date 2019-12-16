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
        if(mystr == "*")
            break;
        //cout<<mystr<<endl;
        cout<<"Case "<<i<<": ";
        if(mystr == "Hajj")cout<<"Hajj-e-Akbar"<<endl;
        else if(mystr == "Umrah")cout<<"Hajj-e-Asghar"<<endl;

    }

    return 0;
}
