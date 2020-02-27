#include<bits/stdc++.h>
using namespace std;



int main()
{
    unsigned int a = 15;

    //a *= -1;
    int c = a>>=2;
    cout<<c<<" "<<a<<endl;

    //a *= -1;
    int d = a>>3;
    cout<<d<<endl;

    ///Logical Shift
    unsigned int b = 16, result;
    printf("value of exp. result = b >> 3 is %d\n", result = b >> 3);
    printf("value of b after right shift by 3 bits, is %d\n", b);
    printf("value of exp. result = b << 3 is %d\n", result = b << 3);
    printf("value of b after left shift by 3 bits, is %d\n\n", b);

    printf("value of exp. b >>= 3 is %d\n", b >>= 3);
    printf("value of b after right shift by 3 bits, is %d\n", b);
    printf("value of exp. b <<= 3 is %d\n", b <<= 3);
    printf("value of b after left shift by 3 bits, is %d\n\n", b);

    ///Arithmetic shift
    int hall = -16;
    printf("value of exp. hall >>= 3 is %d\n", hall >>= 3);
    printf("value of hall, -ve value, after right shift by 3 bits, "
           "is %d\n", hall);

    return 0;
}
