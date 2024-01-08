#include<iostream>
using namespace std;
int main()
{
float total, m,amount, rate=6;
cout<<"Enter the amount";
cin>>amount;
cout<<"Enter the months";
cin>>m;
m=m*rate;
total=(m*amount)/100;
cout<<"The total Tax is "<<total;
return 0;
}
