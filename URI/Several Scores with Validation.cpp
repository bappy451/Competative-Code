#include<bits/stdc++.h>
using namespace std;


int main()
{
    double x,y;
    while(true)
    {
        cin>>x;
        while(x<0 || x>10){
            cout<<"nota invalida"<<endl;
            cin>>x;
        }
        cin>>y;
        while(y<0 || y>10){
            cout<<"nota invalida"<<endl;
            cin>>y;
        }
        double avg = (x+y)/2;
        cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
        int temp=0;
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>temp;
        while(temp<1 || temp>2)
        {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>temp;
        }
        if(temp == 2) break;
    }

    return 0;
}
