#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int counts=0;
    cin>>n;
    int siam[n];
    int bhaja[n];
    for(int i=0;i<n;i++)
    {
        cin>>siam[i];
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(siam[i]==siam[j])
            {
                bhaja[i]=siam[j];
                cout<<bhaja[i];
                counts++;
            }


        }
    }
    if(counts==0)
    {
        cout<<"there is no duplicate data";
    }

    }


