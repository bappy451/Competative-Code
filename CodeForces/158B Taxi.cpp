#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int cou = 0;
        vector<int> vec1;
        vector<int> vec2;
        vector<int> vec3;
        for(int i=0; i<n; i++)
        {
            int x=0;
            cin>>x;
            //cout<<x<<endl;
            if(x==1) vec1.push_back(x);
            if(x==2) vec2.push_back(x);
            if(x==3) vec3.push_back(x);
            if(x==4) cou++;
        }
        int s1=0,s2=0,s3=0;
        s1 = vec1.size();
        s2 = vec2.size();
        s3 = vec3.size();
       // cout<<cou<<" "<<s1<<" "<<s2<<" "<<s3<<endl;
        if(s2>=2){
            cou += (s2/2);
            s2 = s2%2;
        }
        if(s1>0 && s3>0){
            if(s1>s3){
                cou += s3;
                s1 = s1-s3;
                s3 = 0;
            }
            else{
                cou += s1;
                s3 = s3 - s1;
                s1 = 0;
            }
        }
        if(s1>=4){
            cou += (s1/4);
            s1 = s1%4;
        }
        if(s2>0 && s1>0){
            cou++;
            if(s1>2) s1-=2;
            else s1-=s1;
            s2 -= s2;
        }
        if(s1>0){
            cou++;
            s1 = 0;
        }
        //cout<<s2<<endl;
        cou = cou + s1 + s2 + s3;
        cout<<cou<<endl;
    }

    return 0;
}
