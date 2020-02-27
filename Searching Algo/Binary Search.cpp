#include<bits/stdc++.h>
using namespace std;

int binary_Search(int arr[],int l, int r, int key)
{
    if(r>=l){
        int mid = (r - l)/2 + l;

        if(arr[mid] == key) return mid;

        else if(arr[mid]>key) return binary_Search(arr,l, mid-1, key);

        else if(arr[mid]<key) return binary_Search(arr,mid+1, r, key);
    }
    return -1;
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int s = sizeof(arr)/sizeof(arr[0]);

    int key = 10;
    sort(arr,arr+s);
    int pos = binary_Search(arr, 0, s, key);

    cout<<pos<<endl;

    return 0;
}
