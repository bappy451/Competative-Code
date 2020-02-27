#include<bits/stdc++.h>
using namespace std;


int word_summer(string str)
{
    int sum = 0;
    int l = str.length();
    for(int i=0; i<l; i++)
    {
        int temp = str[i];
        if(islower(str[i]))
        {
            sum += str[i]-'a' +1;
        }
        else if(isupper(str[i]))
        {
            sum += str[i]-'A'+1;
        }
        else
            sum +=0;
    }

    return sum;
}

int number_summer(int num)
{
    int sum=0;
    while(num)
    {
        int temp = 0;
        temp = num%10;
        sum +=temp;
        num = num/10;
    }
    if(sum>=10)
        number_summer(sum);
    else
        return sum;
}

int main()
{
    string name1, name2;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(getline(cin,name1))
    {
        getline(cin,name2);
        int num1 = word_summer(name1);
        int num2 = word_summer(name2);
        //cout<<num1<<" "<<num2<<endl;
        int sum1 = number_summer(num1);
        int sum2 = number_summer(num2);

        if(sum1>=sum2) printf("%.2f %c\n",sum2*100.0/sum1,'%');
        else printf("%.2f %c\n",sum1*100.0/sum2,'%');
    }
    return 0;
}
