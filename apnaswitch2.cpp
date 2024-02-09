#include<bits/stdc++.h>
using namespace std;
int main()
{
    char op;
    double num1,num2;
    cin>>num1>>op>>num2;
    switch(op)
    {
    case '+':
        cout<<num1+num2<<endl;
         break;
    case '-':
        cout<<num1-num2<<endl;
        break;
    case '/':
        cout<<num1/num2<<endl;
        break;
     case '*':
        cout<<num1*num2<<endl;
        break;

     default:
        cout<<"enter an valid operator "<<endl;
        break;
    }

}

