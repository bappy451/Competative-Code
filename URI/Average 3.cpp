#include<bits/stdc++.h>
using namespace std;


int main()
{
    double n1, n2, n3, n4,n5;
    while(cin>>n1>>n2>>n3>>n4)
    {
        double temp = n1*2 + n2*3 + n3*4 + n4*1;
        temp /=10.0;
        cout<<"Media: "<<fixed<<setprecision(1)<<temp<<endl;
        if(temp>=7.0) cout<<"Aluno aprovado."<<endl;
        else if(temp<5.0) cout<<"Aluno reprovado."<<endl;
        else{
            cin>>n5;
            temp += n5;
            temp /=2.0;
            cout<<"Aluno em exame."<<endl;
            cout<<"Nota do exame: "<<n5<<endl;
            if(temp>=5.0) cout<<"Aluno aprovado."<<endl;
            else if(temp<=4.9) cout<<"Aluno reprovado."<<endl;
            cout<<"Media final: "<<fixed<<setprecision(1)<<temp<<endl;
        }

    }

    return 0;
}
