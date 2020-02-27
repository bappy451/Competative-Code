#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        int mf=0;
        int ff=0,mm=0;
        char arr[200];
        gets(arr);
        int len = strlen(arr);

        for(int i=0; i<len; i++){
            if(arr[i] == ' ') continue;
            else if(arr[i] == 'M'){
                if(arr[i+1] == 'M') mm++;
                if(arr[i+1] == 'F') mf++;
            }
            else if(arr[i] == 'F'){
                if(arr[i+1] == 'M') mf++;
                if(arr[i+1] == 'F') ff++;
            }
            else if(arr[i] == '\n' || arr[i] == '\0') break;
        }
        //cout<<mm<<" "<<ff<<" "<<mf<<" "<<endl;
        if(mm>0 && mm==ff && mf<2) cout<<"LOOP"<<endl;
        else if(mm==ff && mf>1) cout<<"LOOP"<<endl;
        else cout<<"NO LOOP"<<endl;
    }

    return 0;
}
