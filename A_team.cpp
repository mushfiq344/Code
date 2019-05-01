#include<iostream>

using namespace std;



using namespace std;


int main()
{
    int n;
    int ans=0;
    int a,b,c;

    cin>>n ;


    for(int i=0;i<n;i++)
    {
        a=b=c=0;
        cin>>a>>b>>c;

        if(a+b+c>1)ans++;


    }



cout<<ans<<endl;

}



