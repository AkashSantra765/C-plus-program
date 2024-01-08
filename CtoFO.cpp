#include<iostream>
using namespace std;
int main()
{
    float c,f,x;
    cout<<"Enter the celcius temperature \n";
    cin>>c;
    //f=((c*9)/5)+32;
    x=c*9;
    x=x/5;
    f=x+32;
    cout<<"The farhenheit temperature is "<<f;
}
