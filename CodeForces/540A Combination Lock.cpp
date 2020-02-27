#include<bits/stdc++.h>
using namespace std;

int moves(string current, string destination, int n)
{
    int min_move = 0;

    for(int i=0; i<n; i++)
    {
        int cur = (int)current[i];
        cur -= 48;
        int des = (int) destination[i];
        des -= 48;
        int dif = abs(des-cur);
        if(dif>5) dif = 10 - dif;
        min_move += dif;
    }

    return min_move;
}

int main()
{
    int n=0;
    string current, destination;
    while(cin>>n>>current>>destination)
    {
        cout<<moves(current,destination,n)<<endl;
    }
    return 0;
}
