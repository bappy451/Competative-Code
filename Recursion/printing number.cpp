#include<bits/stdc++.h>
using namespace std;

void printNumber(int n)
{
    if(n<0) return;
    printf("%d\t", n);
    printNumber(n-1);
}

void rprintNumber(int n)
{
    if(n<0) return;
    rprintNumber(n-1);
    printf("%d\t", n);
}

int numberSum(int n)
{
    if(n<0) return 0;
    int sum = n + numberSum(n-1);
    return sum;
}

int digitSum(int n)
{
    if(n/10==0) return n;
    int sum = n%10 + digitSum(n/10);
    return sum;
}

 void numberConverter(int n,int base)
{
    if(n==0) return;
    numberConverter(n/base,base);
    int rem = n%base;
    if(rem<10) printf("%d",rem);
    else printf("%c", rem -10 + 'A');
}

int main()
{
    printNumber(10);
    cout<<endl;
    rprintNumber(10);
    cout<<endl<<"Number Sum: "<<numberSum(100)<<endl;
    cout<<endl<<"Number Sum: "<<digitSum(123)<<endl;
    numberConverter(15,16);
    cout<<endl;
    return 0;
}
