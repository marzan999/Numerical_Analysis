#include<bits/stdc++.h>
#define f(x) (x*x*x-6*x+4)
#define f1(x)(3*x*x-6)
using namespace std;
int main()
{
    float a, b, c, e, x;
    cout<<"Input the value of a and b: ";
    cin>>a>>b;

    if(f(a)*f(b)>=0)
    {
        cout<<"Invalid Input.";
        return 0;
    }

    x=a;

    do
    {
        c=x-(f(x)/f1(x));
        e=x;
        x=c;
    }
    while(fabs(c-e)>0.001);

    cout<<"Root is: "<<c<<endl;
}

// 0 1

