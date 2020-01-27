#include<bits/stdc++.h>
using namespace std;

bool Compair(int *a, int *b)
{
    if(*a<*b) return true;
    else return false;
}

void selectionSort(int *arr,int s)
{
    for(int i=0; i<s-1;i++)
    {
        for(int j=i+1; j<s;j++)
        {
            if(Compair(&arr[j],&arr[i]))
            {
                swap(arr[i], arr[j]);//This actually bubble sort.
            }
        }
    }
}

void print(int *arr,int s)
{
    for(int i=0; i<s; i++)
        cout<<*(arr+i)<<"\t";
    cout<<endl;
}

int main()
{
    int arr[] = {6,1,7,3,222,7,2,8,4,8,4,6,8,11,55,77,33,88,111,77};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    selectionSort(arr,s);
    //print(arr,s);
    for(int i=0; i<s; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
    return 0;
}

