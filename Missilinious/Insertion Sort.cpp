#include<bits/stdc++.h>
using namespace std;

bool Compair(int *a, int *b);
void insertionSort(int *arr, int s);
void print(int *arr, int s);

int main()
{
    int arr[] = {6,1,7,3,222,7,2,8,4,8,4,6,8,11,55,77,33,88,111,77};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    insertionSort(arr,s);
    print(arr,s);

    return 0;
}

void insertionSort(int *arr, int s)
{
    for(int i=1; i<s; i++)
    {
        int a = i-1;
        while(Compair(&arr[a+1],&arr[a]) && a>=0)
        {
            swap(arr[a+1], arr[a]);
            a--;
        }
    }
}

void print(int *arr, int s)
{
    for(int i=0; i<s; i++)
        cout<<*(arr+i)<<"\t";
    cout<<endl;
}

bool Compair(int *a, int *b)
{
    if(*a<*b) return true;
    else return false;
}
