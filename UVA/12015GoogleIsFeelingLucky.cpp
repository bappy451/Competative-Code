#include<bits/stdc++.h>
using namespace std;

typedef struct google
{
    string url;
    int index;
}urls;

int main()
{
    int t;
    int cas=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        vector<urls> myurls;
        cas++;
        for(int i=0; i<10; i++)
        {
            urls myurl;
            cin>>myurl.url>>myurl.index;
            myurls.push_back(myurl);
        }

        for(int i=0;i<10; i++)
        {
            if(myurls.at(i).index>=n)
            {
                n = myurls.at(i).index;
            }
        }
        cout<<"Case #"<<cas<<":"<<endl;
        for(int i=0;i<10; i++)
        {
            if(myurls.at(i).index==n)
            {
                cout<<"\t"<<myurls.at(i).url<<endl;
            }
        }
    }
    return 0;
}

/*
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 10
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
www.university.edu.cn 9
acm.university.edu.cn 10
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 11
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
acm.university.edu.cn 9
acm.university.edu.cn 10
*/
