#include<iostream>
using namespace std;
int fun(int&,int&);
int main()
{
    int a,b;
    cout<<"Enter the number";
    cin>>a>>b;
    cout<<"The results is "<<fun(a,b);
    return 0;
}
int fun(int &x,int &y)
{
    return x+y;
}
