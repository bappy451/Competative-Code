#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l=0;
    while(cin>>l,l)
    {
        string res = "+x",temp[l];

        for(int i=0; i<l-1; i++)
            cin>>temp[i];

        for(int i=0; i<l-1; i++)
        {
            if(temp[i] == "No") continue;
            else if(temp[i] == "+z")
            {
                if(res == "+x") res = "+z";
                else if(res == "-x") res = "-z";
                else if(res == "+z") res = "-x";
                else if(res == "-z") res = "+x";
            }
            else if(temp[i] == "-z")
            {
                if(res == "+x") res = "-z";
                else if(res == "-x") res = "+z";
                else if(res == "+z") res = "+x";
                else if(res == "-z") res = "-x";
            }
            else if(temp[i] == "+y")
            {
                if(res == "+x") res = "+y";
                else if(res == "-x") res = "-y";
                else if(res == "+y") res = "-x";
                else if(res == "-y") res = "+x";
            }
            else if(temp[i] == "-y")
            {
                if(res == "+x") res = "-y";
                else if(res == "-x") res = "+y";
                else if(res == "+y") res = "+x";
                else if(res == "-y") res = "-x";
            }
        }

        cout<<res<<endl;

    }

    return 0;
}
