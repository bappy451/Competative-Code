#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=0;
    cin>>n;
    {
        int temp =0;
        for(int i=0;i<n; i++)
        {
            int siz = 0;
            cin>>temp;
            vector<int> binary;
            while(temp>0)
            {
                int temp1 = temp%2;
                temp /= 2;
                binary.push_back(temp1);
                siz++;
                //cout<<temp1<<endl;
            }
            int counter=0, res=0;
            for(int i=0; i<siz; i++)
            {
                if(binary[i]==1)counter++;
                if(binary[i] ==0){
                    if(counter>=res) res = counter;
                    counter=0;
                }
            }
            if(counter>=res) res = counter;
            cout<<res<<endl;
        }
    }

    return 0;
}
