#include<bits/stdc++.h>
using namespace std;

typedef struct fri
{
    string name;
    int bal=0;
} Friend;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(1)
    {
        int t=0;
        cin>>t;
        Friend f;
        vector<Friend> myf;
        string temp[t];
        for (int i=0; i<t; i++)
        {
            cin>>temp[i];
            f.name = temp[i];
            myf.push_back(f);
        }

        for(int i=0; i<t; i++)
        {
            string name,names[t];
            int taka, people,a,b;
            cin>>name>>taka>>people;
            if(people==0 || taka==0)
            {
                a=0;
                b=0;
            }
            else{
                a = taka/people;
                b = taka - (people*a);
            }
            for(int j=0; j<people; j++)
            {
                cin>>names[j];
            }
            for(int j=0; j<people; j++)
            {
                for(int k=j; k<t; k++)
                {
                    //cout<<myf.at(k).name<<"\t"<<names[j]<<endl;
                    if(myf.at(k).name==names[j])
                    {
                        myf.at(k).bal += a;
                        //cout<<"here"<<endl;
                    }
                }

            }
            for(int j=0;j<t; j++)
            {
                if(myf.at(j).name==name)
                {
                    myf.at(j).bal -= taka;
                    myf.at(j).bal += b;
                }
            }

        }
        for (int r=0; r<t; r++)
        {
            cout<<myf.at(r).name<<" "<<myf.at(r).bal<<endl;
        }


    }

    return 0;
}
