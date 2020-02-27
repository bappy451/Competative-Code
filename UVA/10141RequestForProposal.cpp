#include<bits/stdc++.h>
using namespace std;

int main()
{
    int coun = 0,n,p;
    string mystr;
    while(cin>>n>>p, n||p)
    {

        double d,my_d=2000000000;
        int r,my_r=-1;
        coun++;
        string name,nam;

        for (int i = 0; i < n; i++) {
			cin.ignore();
			getline(cin, mystr);
		}
		//cout<<mystr;
		while(p--)
        {
            getline(cin,nam);
            scanf("%lf %d\n", &d, &r);
            if(r>my_r)
            {
                name = nam;
                my_d = d;
                my_r = r;
            }
            else if(r==my_r && d<my_d)
            {
                name = nam;
                my_d = d;
                my_r = r;
            }
            for(int i = 0; i < r; i++)
                getline(cin,mystr);

        }

        if(coun>1)
            cout<<endl;
        cout<<"RFP #"<<coun<<endl<<name<<endl;

    }

    return 0;
}
