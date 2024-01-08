#include<iostream>
using namespace std;
void add();
void sub(int,int);
int mul();
int fun(int,int);


int main()
{
    int a,b,d,i,n;
    cout<<"wellcome to the virtual Calculator world"<<endl;
    cout<<"what do you want to calculate"<<endl;
    cout<<"Chose the number what do you want"<<endl;
    for(;;)
    {
        cout<<" 1 for Addition\n 2 for Subtraction \n 3 for multiplecation \n 4 for division"<<endl;
        cout<<"select the number"<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<"Addition Program"<<endl;
            add();
        }
        else if(n==2)
        {
            cout<<"subtraction Program"<<endl;
            cout<<"enter the number"<<endl;
            cin>>a>>b;
            sub(a,b);
        }
        else if(n==3)
        {
            cout<<"Multiplecation Program"<<endl;
            d=mul();
            cout<<"The results is "<<d<<endl;
        }
        else if(n==4)
        {
            cout<<"Division Program"<<endl;
            cout<<"The results is "<<fun(a,b);
        }
    cout<<"If you continue calculating.. enter 5 "<<endl;
    cin>>n;
    if(n==5)
        cout<<"Continue..."<<endl;
    else
        break;
    }
    cout<<"Thank you";

    return 0;
}


//Takes nothing and return nothing
void add()
{
    int a ,b ,c;
    cout<<"Enter the number";
    cin>>a>>b;
    c=a+b;
    cout<<"The results is "<<c<<endl;
}

//Takes something and return nothing
void sub(int x, int y)
{
    int z;
    z=x-y;
    cout<<"The results is "<<z<<endl;
}

//Takes nothing and return something
int mul()
{
    int a,b,c;
    cout<<"Enter the number"<<endl;
    cin>>a>>b;
    c=a*b;
    return c;
}

//Takes something and return something
int fun(int x,int y)
{
    int z;
    z=x/y;
    return z;
}


