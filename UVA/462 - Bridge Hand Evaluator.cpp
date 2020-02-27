#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str[13];
    while(cin>>str[0])
    {
        int res = 0, rule5 = 0;

        for(int i=1; i<13; i++)
            cin>>str[i];
        for(int i=0; i<13; i++)
            cout<<str[i];
            cout<<endl;
        int spade=0, heart=0, diamond=0, club=0;
        int o_spade=0, o_heart=0, o_diamond=0, o_club=0;
        bool sp[4], he[4], di[4], cl[4];
        for(int i=0; i<13; i++)
        {
            string temp = str[i];

            if(temp[0] == 'A') {
                res += 4;

                if(temp[1] == 'S') {spade++; sp[0] = true; }
                if(temp[1] == 'H') {heart++; he[0] = true; }
                if(temp[1] == 'D') {diamond++; di[0] = true; }
                if(temp[1] == 'C') {club++; cl[0] = true; }
            }
            else if(temp[0] == 'K') {
                res += 3;

                if(temp[1] == 'S') {spade++; sp[1] = true; }
                if(temp[1] == 'H') {heart++; he[1] = true; }
                if(temp[1] == 'D') {diamond++; di[1] = true; }
                if(temp[1] == 'C') {club++; cl[1] = true; }
            }
            else if(temp[0] == 'Q')
                {
                res += 2;

                if(temp[1] == 'S') {spade++; sp[2] = true; }
                if(temp[1] == 'H') {heart++; he[2] = true; }
                if(temp[1] == 'D') {diamond++; di[2] = true; }
                if(temp[1] == 'C') {club++; cl[2] = true; }
            }
            else if(temp[0] == 'J')
            {
                res += 1;

                if(temp[1] == 'S') {spade++; sp[3] = true; }
                if(temp[1] == 'H') {heart++; he[3] = true; }
                if(temp[1] == 'D') {diamond++; di[3] = true; }
                if(temp[1] == 'C') {club++; cl[3] = true; }
            }
            else{
                if(temp[1] == 'S') {o_spade++;}
                if(temp[1] == 'H') {o_heart++;}
                if(temp[1] == 'D') {o_diamond++;}
                if(temp[1] == 'C') {o_club++;}
            }
        }
        if(spade == 1 && sp[1] == true) res--;
        if(diamond == 1 && di[1] == true) res--;
        if(heart == 1 && he[1] == true) res--;
        if(club == 1 && cl[1] == true) res--;

        if(spade == 1 && sp[2] == true && o_spade<2) res--;
        if(diamond == 1 && di[2] == true && o_diamond<2) res--;
        if(heart == 1 && he[2] == true && o_heart<2) res--;
        if(club == 1 && cl[2] == true && o_club<2) res--;

        if(spade == 1 && sp[3] == true && o_spade<=2) res--;
        if(diamond == 1 && di[3] == true && o_diamond<=2) res--;
        if(heart == 1 && he[3] == true && o_heart<=2) res--;
        if(club == 1 && cl[3] == true && o_club<=2) res--;


        if(spade+o_spade == 2) rule5++;
        if(heart+o_heart == 2) rule5++;
        if(diamond+o_diamond == 2) rule5++;
        if(club+o_club == 2) rule5++;

        if(spade+o_spade == 1) rule5+=2;
        if(heart+o_heart == 1) rule5+=2;
        if(diamond+o_diamond == 1) rule5+=2;
        if(club+o_club == 1) rule5+=2;

        if(spade+o_spade == 0) rule5+=2;
        if(heart+o_heart == 0) rule5+=2;
        if(diamond+o_diamond == 0) rule5+=2;
        if(club+o_club == 0) rule5+=2;

        char c;
        int arr[4];
        arr[0] = spade+o_spade;
        arr[1] = diamond + o_diamond;
        arr[2] = heart + o_heart;
        arr[3] = club + o_club;
        sort(arr,arr+4);
        if(arr[3] == (spade + o_spade)) c = 'S';
        if(arr[3] == (club + club)) c = 'C';
        if(arr[3] == (heart + heart)) c = 'H';
        if(arr[3] == (diamond + o_diamond)) c = 'D';

        int temp = res + rule5;
        if(res>=16) cout<<"BID NO-TRUMP"<<endl;
        if(temp>=14) cout<<"BID "<<c<<endl;
        else if(temp<14) cout<<"BID PASS"<<endl;
    }

    return 0;
}
///KS QS TH 8H 4H AC QC TC 5C KD QD JD 8D
