#include<bits/stdc++.h>
using namespace std;
class music{
public:
 int index;
 int weight;
};


int main()
{int  n,k , c, d, swap,total=0,num=0,total1=0;
  music *array;
    cin>>n>>k;
    array = new music[n];

for (c = 0; c < n; c++){cin>>array[c].weight;array[c].index=c+1;}


for (c = 0 ; c <n; c++)
{for (d = 0 ; d <n-1; d++)
    {if (array[d].weight > array[d+1].weight){

            swap= array[d].index;
            array[d].index = array[d+1].index;
            array[d+1].index=swap;
            swap= array[d].weight;
            array[d].weight = array[d+1].weight;
            array[d+1].weight=swap;
                            }                                   /* For decreasing order use < */}
}
for (c = 0; c < n; c++){if(total+array[c].weight<=k){total=array[c].weight+total;total1++;}
else array[c].index=n+1;}
cout<<total1<<endl;
for (c = 0 ; c <n; c++)
{for (d = 0 ; d <n-1; d++)
    {if (array[d].index > array[d+1].index){

            swap= array[d].index;
            array[d].index = array[d+1].index;
            array[d+1].index=swap;

                            }                                   /* For decreasing order use < */}
}

for (c = 0; c < total1; c++){cout<<array[c].index<<" ";}


}
