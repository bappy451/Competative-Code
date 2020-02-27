#include<bits/stdc++.h>
using namespace std;


int main()
{
    double arr[3];
    while(cin>>arr[0]>>arr[1]>>arr[2])
    {
        for(int i=0; i<2; i++)
            for(int j=i+1; j<3; j++)
                if(arr[i]<arr[j])
                    swap(arr[i], arr[j]);
        //for(int i=0; i<3; i++)
          //  cout<<arr[i]<<endl;
        double temp = arr[1] + arr[2];
        if(arr[0]>=temp){
            cout<<"NAO FORMA TRIANGULO"<<endl;
            continue;
        }
        temp = arr[1]*arr[1] + arr[2]*arr[2];
        double temp1 = arr[0]*arr[0];
        if(temp1 == temp) cout<<"TRIANGULO RETANGULO"<<endl;
        if(temp1 > temp) cout<<"TRIANGULO OBTUSANGULO"<<endl;
        if(temp1 < temp) cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(arr[0] == arr[1] && arr[1] == arr[2]) cout<<"TRIANGULO EQUILATERO"<<endl;
        else if(arr[0] == arr[1] || arr[1] == arr[2]) cout<<"TRIANGULO ISOSCELES"<<endl;
    }

    return 0;
}
