#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0,temp=0,l=0;

    string names[100];
    string songs[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>names[i];
    }

    temp = t%16;
    temp = 16 - temp;
    l = t+temp;

    int j=0,k=0;
    for(int i=0; i<l; i++)
    {
        cout<<names[j]<<": "<<songs[k]<<endl;
        j++;
        k++;
        if(j==t)
            j=0;
        if(k==16)
            k=0;
    }

    return 0;
}
