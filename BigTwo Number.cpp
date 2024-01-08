#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    /*if(a>b)
        {
            cout<<"The first number is big";
        }
    else
        {
            cout<<"The second number is big";
        }*/

    if(a>b?cout<<a<<" is big":cout<<b<<" is the big")
    return 0;
}
