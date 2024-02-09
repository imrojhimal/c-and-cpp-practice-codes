#include<bits/stdc++.h>
using namespace std;
int main()
{
   int testcase,i=1,j;
   int box;
   cin>>testcase;
   while(i<=testcase)
   {
       long long sum=0,minn=0,sub=0,multi=0;
       cin>>box;
       int candy[box];
       for(j=0;j<box;j++)
       {
           cin>>candy[j];
           sum=candy[j]+sum;
           minn=candy[0];

           if(minn<candy[j])// 1000,1000,5,1000,1000,1000,1000
           {
               minn=candy[0];
           }
           else
            {
                minn=candy[j];
            }

       }
       multi=minn*box;
       sub=sum-multi;
       cout<<sub<<endl;

       i++;
   }


}
