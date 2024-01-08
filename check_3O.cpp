#include<iostream>
using namespace std;
int main()
{
     char n;
    cout<<"Enter a charecter\n";
    cin>>n;
    if(n>='A' && n<='Z')
        cout<<"Your enter charecter is uppercase alphabet\n";
    else if(n>='a' && n<='z')
        cout<<"Your enter charecter is lowercase alphabet\n";
    else if(n>='0' && n<='9')
        cout<<"Your enter charecter is digit\n";
    else
        cout<<"Your enter charecter is speacial charecter\n";
    return 0;
}
