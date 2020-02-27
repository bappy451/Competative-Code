#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[3] = {[12]=3};
    int n = sizeof(arr)/sizeof(arr[0]);

    print(arr,n);

    return 0;
}
