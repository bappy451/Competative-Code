#include<bits/stdc++.h>
using namespace std;

bool distinctNumber(int n)
{
    set<int> number;
    while(n>0)
    {
        int x = n%10;
        n /=10;
        number.insert(x);
    }
    int a = number.size();
    if(a==4) return true;
    else return false;
}

int main()
{
    int y=0;
    while(cin>>y)
    {
        bool flag = false;
        while(!flag)
        {
            //y++;
            //cout<<y<<"\t";
            if(distinctNumber(++y))
            {
                flag = true;
            }
        }
        cout<<y<<endl;
    }

    return 0;
}
