#include<bits/stdc++.h>
using namespace std;


int main()
{
    double salary=0.0;
    while(cin>>salary)
    {
        double in = 0.0;
        if(salary <= 400.00) in = .15;
        else if(salary <= 800.00) in = .12;
        else if(salary <= 1200.00) in =.10;
        else if(salary <= 2000.00) in = .07;
        else if(salary > 2000.00) in = 0.04;
        double inc = in*salary;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary+inc<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<inc<<endl;
        cout<<"Em percentual: "<<fixed<<setprecision(0)<<in*100<<" %"<<endl;
    }

    return 0;
}
