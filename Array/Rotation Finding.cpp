#include<bits/stdc++.h>
using namespace std;

bool compair(int a, int b)
{
    return a<=b ? true: false;
}

///Naive approach for rotation finding
int rotatedN(int arr[], int l, int r)
{
    int pos = l;
    if(l>r) return -1;
    if(l==r) return pos;
    for(int i=l; i<r-1; i++)
        if(!compair(arr[i],arr[i+1]))
            pos = i;

    return pos;
}

/// Optimized approach for rotation finding.
int rotatedO(int arr[], int l, int r)
{
    ///base case
    if(l>r) return -1;
    if(l==r) return l;

    int mid = l + (r-l)/2;
    if(mid>l && arr[mid]<arr[mid-1]) return --mid;
    if(r>mid && arr[mid]>arr[mid+1]) return mid;

    if(arr[l] >= arr[mid]) return rotatedO(arr, l, mid-1);
    return rotatedO(arr, mid+1, r);
}


int main()
{
    int arr[] = {5,6,7,8,9,10,11,12,13,14,15,16,0,1,2,3,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    //cout<<compair(5,6)<<endl;
    int l,r;
    while(true){
        int l = rand()%s;
        int r = rand()%s;
        cout<<l<<" "<<r<<"\t";
        int pos1 = rotatedN(arr,l,r);
        cout<<pos1<<" ";

        int pos2 = rotatedO(arr,l,r);
        cout<<pos2<<" ";
        if(pos1 == pos2) cout<<"OK"<<endl;
        else{
            cout<<"problem"<<endl;
            break;
        }
    }

    return 0;
}
