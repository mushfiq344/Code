#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    int grp=1;
    char ch1,ch2,ch3,ch4;
    cin>>a;
    cin>>ch1;
    cin>>ch2;

    for(int i=0;i<a-1;i++)
    {
        cin>>ch3;
        cin>>ch4;

        if(ch3!=ch1 && ch4!=ch2){
            grp++;
            ch1=ch3;
            ch2=ch4;
        }
    }

    cout<<grp;


}
