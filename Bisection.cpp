#include<bits/stdc++.h>
using namespace std;

double func(double x)
{
    return (x*x)-3;
}

double err = 0.01;
double c;

void bisection(double a, double b)
{
    if(func(a)*func(b)>=0)
    {
        cout<<"Incorrect a and b"<<endl;
        return;
    }
    c=a;

    while((b-a)>=0.01)
    {
        c=(a+b)/2;
        if(func(c)==0.0)
        {
            cout<<"Root = "<<c<<endl;
            break;
        }
        else if(func(c)*func(a)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
}


int main()
{
    double a, b;

    cout<<"The function used: x^2-3"<<endl;

    cout<<"Input the value of a and b: ";
    cin>>a>>b;

    bisection(a, b);

    cout<<"The root using bisection method is: "<<c<<endl;

    return 0;
}
