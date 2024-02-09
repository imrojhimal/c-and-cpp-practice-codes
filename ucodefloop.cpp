#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum1=0,sum2=0,sum=0;//a and b is the range
    int i,j,temp=0,c,len;
    cin>>n>>a>>b;
    for(j=1;j<=n;j++)
    {
        for(i=a;i<=b;i++)
        {
            if(j==i)
            {
                sum1=sum1+j;
            }
            else
            {
                int m=j;// m is temporary variable
                for( len=1;m>0;len++)
                {
                  m=m/10;
                }
                int temp=j;// again using temporary variable
                for(c=1;c<=len;c++)
                {
                    j=j/10;
                    if(j==i)
                    {
                        sum2=sum2+temp;
                        break;
                    }
                }
            }
        }

    }
   sum=sum1+sum2;
cout<<sum;
}
