#include<bits/stdc++.h>
using namespace std;

int binary_Search(int arr[], int l, int r, int key)
{
    if(r>=l){
        int mid = l + (r-l)/2;
        if(arr[mid] == key) return mid;

        if(arr[mid] > key) return binary_Search(arr, l, mid-1, key);

        if(arr[mid] < key) return binary_Search(arr, mid+1, r, key);
    }

    return -1;
}

int exponentialSearch(int arr[], int n, int key)
{
    if(arr[0]==key) return 0;
    int i=1;
    n=n-1;
    while(i<=n && arr[i]<=key){
        if(arr[i]==key) return i;
        i *= 2;
        if(arr[i]==key) return i;
    }
    return binary_Search(arr, i/2, min(i,n),key);
}


int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int s = sizeof(arr)/sizeof(arr[0]);

    int key = 4;
    sort(arr,arr+s);
    int pos = binary_Search(arr, 0, s, key);
    cout<<pos<<endl;

    pos = exponentialSearch(arr, s, key);
    cout<<pos<<endl;

    return 0;
}
