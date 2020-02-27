#include<bits/stdc++.h>
using namespace std;

double trapeziumArea(double a, double b, double h)
{

    return 0.5*h*(a+b);
}

double trianglePerimetro(double a, double b, double c)
{
    return a+b+c;
}

int main()
{
    double arr[3];
    while(cin>>arr[0]>>arr[1]>>arr[2])
    {
        double temp;
        temp = trapeziumArea(arr[0],arr[1],arr[2]);
        sort(arr,arr+3);
        double arm2 = arr[0]+arr[1];
        if(arm2>arr[2]){
            cout<<"Perimetro = "<<fixed<<setprecision(1)<<trianglePerimetro(arr[0],arr[1],arr[2])<<endl;
        }
        else cout<<fixed<<setprecision(1)<<"Area = "<<temp<<endl;
    }
    return 0;
}
