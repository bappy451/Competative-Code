#include<bits/stdc++.h>
using namespace std;

bool getBit(int n, int i)
{
    return ((n & (1<<i)) != 0);
}

int setBit(int n, int i)
{
    return n | (1<<i);
}

int clearBit(int n, int i)
{
    return n | (1<<i);
}

int main()
{
    int i = 16;
    cout<<getBit(i,4)<<" "<<i<<endl;
    cout<<setBit(i,1)<<" "<<i<<endl;
    cout<<clearBit(i,1)<<" "<<i<<endl;

    return 0;
}
