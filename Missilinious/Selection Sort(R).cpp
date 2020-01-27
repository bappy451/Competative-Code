#include<bits/stdc++.h>
using namespace std;

void print(int *arr, int s)
{
    for(int i=0; i<s; i++)
        cout<<*(arr+i)<<"\t";
    cout<<endl;
}

bool compair(int a, int b)
{
    if(a<b) return true;
    else return false;
}

void selectionSort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        int p_min = i;
        for(int j=i+1; j<n; j++)
        {
            if(compair(arr[j],arr[p_min]))
                p_min = j;
        }
        int temp = arr[i];
        arr[i] = arr[p_min];
        arr[p_min] = temp;
    }
}


int main()
{
    int arr[] = {6,1,7,3,222,7,2,8,4,8,4,6,8,11,55,77,33,88,111,77};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    selectionSort(arr,s);
    print(arr,s);

    return 0;
}
