#include<bits/stdc++.h>
using namespace std;
int main()
{
      int number = 0,n;
    int min = 0;
    cin>>n;


while( n)
{


    cin >> number ;
    if (number < min)
        min = number;
    n--;
}
cout << "your minimum number is: " << min << endl;
}
