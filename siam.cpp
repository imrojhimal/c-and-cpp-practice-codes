#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long E,O,P,N,Z;
    int C;

    cin>>C;

    for(int i=1;i<=C;i++)
    {
        cin>>i;
if(i%2==0)
        {
          E=i;
          E++;
          }
           if(i>0)
        {
           P=i;
           P++;

        }
        if(i%2!=0)
        {
            O=i;
            O++;
        }
         else
        {
            N=i;
            N++;
            }

}

cout<<"Positive:"<<P<<endl<<"Negatives:"<<N<<endl<<"Odd:"<<O<<endl<<"Even:"<<E;

return 0;
}
