#include<bits/stdc++.h>
using namespace std;

void increment(int* i)
{
    *i = *i+1;
}

int* add(int *i, int *j)
{
    int* c = new int(0);
    *c = *i+*j;
    return c;
}

int add1(int i, int j)
{
    //int* c = new int(0);
    int c = i+j;
    return c;
}
void print(char *name)
{
    printf("Hello world %s\n",name);
}
void print()
{
    printf("Hello world %s\n");
}
void B(void (*AA)())
{
    AA();
}
int main()
{
    int (*ptrf)(int,int);
    ptrf = &add1;
    print("eshana");
    void (*prin)(char*);
    prin = print;
    prin("eshana");
    void (*PP)() = print;
    B(PP);
    cout<<(*ptrf)(9,10)<<endl;
    int a[4] = {2,3,4,5};
    char c[2] = {'a','b'};
    int *p = a;
    char *ch = c;

    char str[22] = "Digital Bangladesh:)";
    for(int i=0; i<17; i++)
        cout<<str[i];
    int s = 22;
    cout<<endl;
    char *ptr = str;
    for(int i=0; i<s; i++)
    {
        cout<<*(ptr+i);
    }
    cout<<endl;
    cout<<str<<endl;

    int i=1024;
    int *pt = &i;
    int **q = &pt;
    int ***r = &q;
    printf("%d\t",i);
    increment(&i);
    printf("%d\n",i);

    int j= 512;
    int* k = add(pt,&j);
    cout<<*k<<endl;
    //cout<<sizeof(ch)<<"\t"<<sizeof(p);
    return 0;
}
