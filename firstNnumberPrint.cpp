#include<iostream>
using namespace std;
void num(int);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    num(n);
    return 0;
}

void num(int n)
{
    if(n>0)
    {
        num(n-1);
        cout<<n;
    }
}
