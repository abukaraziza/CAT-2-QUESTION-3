#include <iostream>
using namespace std;

int avg(int sum, int num)
{
int avg;
avg=sum/Num;
return avg;
}

int main()
{
    int Num,marks;
    float n[7], sum=0.0;

    cout<<"Enter the number of students";
    cin>>Num;

    while(Num>7)
    {
        cout<<"Enter number of marks again. ";
        cin>>Num;
    }

    for (int Num =0; Num<7; Num++)
    {
    cout<<"Enter students marks: ";
    cin>>[marks];
    sum+=marks;
    }

cout<<"The average is "<<avg<<endl;
}
