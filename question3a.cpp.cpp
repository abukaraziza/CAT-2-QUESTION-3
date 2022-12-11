#include <iostream>
using namespace std;

int checkEven(int Num)
{
    int even;
    even = Num % 2 == 0;
    return even;
}

int main()
{
    int Num;
    cout<<"Enter number";
    cin>>Num;
if (checkEven (Num))
{
    cout<<"The number" <<Num<< " is even."<<endl;

}
else
{
    cout<<"The number " <<Num<< " is odd. "<<endl;
}
return 0;
}