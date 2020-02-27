#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int l, int r, int key)
{
    for(int i=l; i<=r; i++)
        if(arr[i] == key) {
            return i;
        }
    return -1;
}

int jump_Search(int arr[], int l, int r, int key)
{
    int jump = sqrt((r-l));
    int low = l;
    while(arr[low] <= key && low<=r){
        if(arr[low]==key) return low;
        else{
            low += jump;
        }

    }
    if(arr[low] == key) return key;
    if(low >= r) return -1;
    else return linearSearch(arr, low-jump, low, key);
}


int main()
{
    int arr[] = { 1,1,2,2,2,3,3,3, 3, 4, 10, 40 };
    int s = sizeof(arr)/sizeof(arr[0]);

    int key = 4;
    sort(arr,arr+s);
    int pos = jump_Search(arr, 0, s, key);

    cout<<pos<<endl;

    return 0;
}
