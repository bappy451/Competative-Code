#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int arr[m][n];
        pair<int,int> pos;
        vector<pair<int,int>> myvec;
        for(int i=0; i<m; i++)
            for(int j=0; j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j] == 42){
                    pos.first = i+1;
                    pos.second = j+1;
                    myvec.push_back(pos);
                }
            }
        bool flag = true;
        int len = myvec.size();
        for(int i=0; i<len; i++)
        {
            bool gone = false;
            int x = myvec.at(i).first;
            int y = myvec.at(i).second;
            x --;
            y--;
            if(x<1 && x>m-2) continue;
            if(y<1 && y>n-2) continue;
            for(int k=0; k<3; k++)
            {
                gone = true;
                if(arr[x-1][y-1+k] != 7) flag = false;
                if(arr[x-1+k][y-1] != 7) flag = false;
                if(arr[x+1][y-1+k] != 7) flag = false;
                if(arr[x-1+k][y+1] != 7) flag = false;
            }
            if(flag && gone){
                cout<<++x<<" "<<++y<<endl;
                return 0;
            }
        }
        cout<<0<<" "<<0<<endl;
        return 0;
    }

    return 0;
}
