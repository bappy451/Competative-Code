#include<bits/stdc++.h>
using namespace std;


int linearSearch(int arr[], int s, int key)
{
    int pos = 0;
    for(int i=0; i<s; i++)
        if(arr[i] == key) return i;

    return -1;
}

int main()
{
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    int key = 110;
    int res = linearSearch(arr,s,key);

    cout<<res<<endl;
    return 0;
}
