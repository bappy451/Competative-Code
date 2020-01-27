#include<bits/stdc++.h>
using namespace std;

bool compair(int a, int b)
{
    if(a>b) return true;
    else return false;
}

void mergeArray(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeArray(int *a, int b, int *x, int y, int *arr)
{
    int i=0,j=0,k=0;
    while(i<b && j<y)
    {
        if(a[i]<x[j])
            arr[k++] = a[i++];
        else
            arr[k++] = x[j++];
    }
    while(i<b)
        arr[k++] = a[i++];
    while(j<y)
        arr[k++] = x[i++];
}

void print(int *arr, int s)
{
    for(int i=0; i<s; i++)
        cout<<*(arr+i)<<"\t";
    cout<<endl;
}

void MergeArray(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r -m;

    int L[n1],R[n2];

    for(int i=0; i<n1; i++)
        L[i] = arr[l+i];
    for(int j=0; j<n2; j++)
        R[j] = arr[m+1+j];

    int i=0,j=0;
    int k = l;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        MergeArray(arr,l,m,r);
    }
}

int main()
{
    /*int arr1[] = {1,3,5,7,9};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {0,2,4,6,7,8};
    int s2 = sizeof(arr2)/sizeof(arr2[0]);

    print(arr1,s1);
    print(arr2,s2);
    cout<<s1<<"\t"<<s2<<endl;
    int ss = s1+s2;
    int arr3[ss];
    mergeArray(arr1,s1,arr2,s2,arr3);
    print(arr3,ss);*/

    int arr[] = {6,1,7,3,222,7,2,8,4,8,4,6,8,11,55,77,33,88,111,77};
    int s = sizeof(arr)/sizeof(arr[0]);
    print(arr,s);
    cout<<s<<endl;
    mergeSort(arr,0,s-1);
    print(arr,s);

    return 0;
}

