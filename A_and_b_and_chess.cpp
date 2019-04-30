#include<bits/stdc++.h>
using namespace std;
int main()
{char a;
    int sum1=0,sum2=0,i,j;
    for(i=0;i<8;i++)
    {for(j=0;j<8;j++)
        {   cin>>a;
            if(a=='Q')sum1=sum1+9;
            else if(a=='R')sum1=sum1+5;
            else if(a=='B')sum1= sum1+3;
            else if(a=='N')sum1=sum1+3;
            else if(a=='P')sum1=sum1+1;
            else if(a=='q')sum2=sum2+9;
            else if(a=='r')sum2=sum2+5;
            else if(a=='b')sum2= sum2+3;
            else if(a=='n')sum2=sum2+3;
            else if(a=='p')sum2=sum2+1;
}cout<<endl;}
if(sum1>sum2)cout<<"White";
else if(sum2>sum1)cout<<"Black";
else if(sum1==sum2)cout<<"Draw";}

