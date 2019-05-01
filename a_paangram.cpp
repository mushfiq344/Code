#include<bits/stdc++.h>
using namespace std;
int main()
{ string x;
int n;
cin>>n;
cin>>x;
int i,j,k,total=0;
for(i=0;i<n;i++){x[i]=tolower(x[i]);}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){if(x[i]==x[j])x[i]=' ';}
}
for(i=0;i<n;i++){ if(x[i]>= 'a' && x[i]<='z')total = total+x[i]; }
 if(total==2847)cout<<"YES";
 else cout<<"NO";
}
   /*int x=97,i,total=0;
    for(i=1;i<=26;i++){
        cout<<x<<endl;
        total=total+x;
        x++;
    }   */
