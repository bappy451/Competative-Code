#include<bits/stdc++.h>
using namespace std;

int interpolationSearch(int arr[], int l, int r, int key)
{
    if(r >= l)
    {
        int pos = 0;
        pos = l+ ((key-arr[l])*(r-l))/(arr[r]-arr[l]) ;
        //pos = l + (((double)(r - l) / (arr[r] - arr[l])) * (key - arr[l]));
        cout<<pos<<" "<<l<<" "<<r<<" "<<arr[r]<<" "<<arr[l]<<" "<<key<<endl;
        if(arr[pos] == key) return pos;
        if(arr[pos] > key) return interpolationSearch(arr,l, pos-1, key);
        if(arr[pos] < key) return interpolationSearch(arr,pos+1, r, key);
    }
    return -1;
}


int main()
{
    int arr[] = { 0,1, 2, 3, 4, 5,6,7,8,9,10,11,12,13,14,15,16 };
    int s = sizeof(arr)/sizeof(arr[0]);

    int key = 4;
    sort(arr,arr+s);
    --s; ///in search we use last index but in array size calculation the size is always (last index + 1)... so we decrease s by 1 :)
    int pos = interpolationSearch(arr, 0, s, key);
    cout<<pos<<endl;

    return 0;
}
