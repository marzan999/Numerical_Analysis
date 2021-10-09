#include<bits/stdc++.h>
using namespace std;
int main()
{
    float ax[100], ay[100], diff[100][100], nr=1, dr=1, x, p, h, yp;
    int i, j, k, n;

    cout<<" how many numbers do you want: ";
    cin>>n;

    cout<<"Enter the value of x and y: "<<endl;
    for(i=0; i<n; i++)
        cin>>ax[i]>>ay[i];

    cout<<"Enter the value of x for which y is wanted: ";
    cin>>x;

    h = ax[1]-ax[0];

    for(i=0; i<n-1; i++)
    {
        diff[i][1]=ay[i+1]-ay[i];
    }
    for(j=2; j<=n-1; j++)
    {
        for(i=0; i<n-j; i++)
        {
            diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
        }
    }

    i=n-1;

    p = (x-ax[i])/h;
    yp=ay[i];
    i--;

    for(k=1; k<n; k++)
    {
        nr*=p+k-1;
        dr*=k;
        yp+=(nr/dr)*diff[i--][k];
    }
    cout<<"When x = "<<x<<" corresponding y = "<<yp<<endl;

}

/*
input

40 184
50 204
60 226
70 250
80 276
90 304

wanted: 84
*/
