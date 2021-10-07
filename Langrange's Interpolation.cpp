#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x[100], y[100], xp, yp=0, p;
    int i, j, n;

    cout<<endl<<"How many numbers do you want: ";
    cin>>n;
    cout<<endl<<"Enter the value of x and y: "<<endl;

    for(i=1; i<=n; i++)
    {
        cin>>x[i]>>y[i];
    }
    cout<<"Enter interpolation point: ";
    cin>>xp;

    for(i=1; i<=n; i++)
    {
        p=1;
        for(j=1; j<=n; j++)
        {
            if(i!=j)
            {
                p = p* (xp - x[j])/(x[i] - x[j]);
            }
        }
        yp = yp + p * y[i];
    }
    cout<< endl<<"Interpolated value at "<< xp<< " is "<< yp<<endl;

    return 0;
}

/*
25 32
30 67.3
40 89.1
50 94.4

35
*/