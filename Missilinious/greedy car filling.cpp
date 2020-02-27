#include<bits/stdc++.h>
using namespace std;

int minReils(int arr[], int init,int n, int L)
{
    int min_refil = 0, current_pos = 0;

    while(arr[init]<arr[n])
    {
        while((arr[current_pos] - arr[init]) <= L)
        {
            current_pos++;
        }
        //if(current_pos == n) return -1;
        min_refil++;
        init = current_pos;
    }
    if(min_refil > n) return -1;
    return min_refil;
}

int main()
{
    int arr[] = {0,200, 375,550,750,950};
    int s = sizeof(arr)/sizeof(arr[0]);
    s--;
    int L = 400;

    int refil = minReils(arr, 0, s, L);
    cout<<refil<<endl;

    return 0;
}
