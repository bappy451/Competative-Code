#include<bits/stdc++.h>
using namespace std;

int binarySearch(int nums[],int key,int low, int high)
{
    if(low>high) return -1;
    int middle = low+(high-low)/2;
    if(nums[middle]==key) return middle;
    if(key<nums[middle]) return binarySearch(nums, key, low, middle-1);
    if(key>nums[middle]) return binarySearch(nums, key, middle+1, high);
}

int main()
{
    int nums[] = {1,2,4,5,6,7,8,9,12,14,15,24,26,34,35,46,57,67,78,89,90,99,111};
    int num=1;
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<<"index of key is: "<<binarySearch(nums,num, 0, n-1)<<endl;

    return 0;
}
