#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter a number";
    cin>>n;
    x=n;
    n=n%10;
    cout<<"The last digit of your given number is "<<n<<"\n";
    n=x/10;
    cout<<"After remove the last digit the number is "<<n;
    return 0;
}
