#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int n,f;
    cout<<"Enter the number"<<endl;
    cin>>n;
    f=factorial(n);
    cout<<"The factorial is "<<f;
    return 0;
}

int factorial(int n)
{
    int c;
    if(n==1)
        return 1;
    c=n*factorial(n-1);
    return c;
}
