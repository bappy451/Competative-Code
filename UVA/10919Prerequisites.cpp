#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=0, m=0;
    while(cin>>k,k)
    {
        cin>>m;
        map<string,int> coures;
        int c,r;
        bool flag = true;
        int cou;
        for(int i=0;i<k;i++)
        {
            string str;
            cin>>str;
            ++coures[str];
        }
        for(int i=0; i<m; i++)
        {
            cin>>c>>r;
            cou = r;
            for(int j=0; j<c ; j++)
            {
                string course;
                cin>>course;
                if(coures.find(course) != coures.end())
                    cou--;
            }
            if(cou > 0) flag = false;
        }
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}
