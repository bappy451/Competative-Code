#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
///This function uses auxiliary space of O(d) & Time complexity is O(n).
void arrayRotate(int arr[], int n, int d)
{
    int temp[d];
    for(int i=0; i<d; i++)
        temp[i] = arr[i];
    for(int i=d; i<n; i++)
        arr[i-d] = arr[i];
    for(int i=(n-d); i<n; i++)
        arr[i] = temp[i-(n-d)];
}

///this function rotate array by one.
void arrayRotateBO(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1; i<n; i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}

///Juggling function for array rotation.
void arrayRotateJ(int arr[], int n, int d)
{
    int gcd = __gcd(n,d);
    for(int i=0; i<gcd; i++)
    {
        int temp = arr[i];
        int j = i;
        int k = i + gcd;
        while(k<n)
        {
            arr[j] = arr[k];
            j += gcd; k+=gcd;
        }

        arr[j] = temp;
    }
}

void reverseArrary(int arr[], int l, int r)
{
    int k = r-1;
    for(int i=l; i<k ; i++)
    {
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
        k--;
    }
}

///Reversing method.
/**
rotate(arr[], d, n)
  reverse(arr[], 1, d) ;
  reverse(arr[], d + 1, n);
  reverse(arr[], 1, n);
**/
void arrayRotateR(int arr[], int n, int d)
{
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}


///This function works on one by one manner & Time complexity is O(n*d).
void arrayRotateObO(int arr[], int n, int d)
{
    for(int i=0; i<d; i++)
        arrayRotateBO(arr, n);
}

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);

    int d = 2;
    arrayRotate(arr, n, d);
    print(arr,n);

    arrayRotateBO(arr, n);
    print(arr,n);

    arrayRotateObO(arr, n, d);
    print(arr,n);

    arrayRotateJ(arr, n, d);
    print(arr,n);

    arrayRotateR(arr, n, d);
    print(arr,n);

    reverseArrary(arr, 0, n);
    print(arr,n);

    return 0;
}
