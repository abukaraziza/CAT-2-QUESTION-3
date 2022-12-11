#include <iostream>
using namespace std;
int max(int);
int main()
{
    int Num1, Num2, Num3, max;
    cout<<"Enter first number";
    cin>> Num1;
    cout<<"Enter second number";
    cin>>Num2;
    cout<<"Enter third number";
    cin>>Num3;

    if(Num1>Num2 && Num1>Num3)
    {
        max=Num1;   
    }
    else if (Num2>Num1 && Num2>Num3)
    {
        max=Num2;
    }
   else if (Num3>Num1 && Num3>Num2)
    {
        max=Num3;
    }

    cout<<"The greatest number of the three is "<<max<< "."<<endl;
    }
