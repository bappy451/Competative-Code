#include<bits/stdc++.h>
using namespace std;


int main()
{
    int sd,sh,sm,ss,fd,fh,fm,fs;
    char temp;
    string str;
    cin>>str>>sd;
    cin>>sh>>temp>>sm>>temp>>ss;
    cin>>str>>fd;
    cin>>fh>>temp>>fm>>temp>>fs;
    //cout<<sd<<" "<<sm<<" "<<fd<<" "<<fm<<endl;

    int day = fd - sd;
    int hour = fh - sh;
    int minu = fm - sm;
    int sec = fs - ss;
    while(sec<0){
        sec += 60;
        minu--;
    }
    while(minu<0){
        minu += 60;
        hour--;
    }
    while(hour<0){
        hour += 24;
        day--;
    }
    cout<<day<<" dia(s)"<<endl;
    cout<<hour<<" hora(s)"<<endl;
    cout<<minu<<" minuto(s)"<<endl;
    cout<<sec<<" segundo(s)"<<endl;

    return 0;
}

/*
Dia 5
08 : 12 : 23
Dia 9
06 : 13 : 23
*/
