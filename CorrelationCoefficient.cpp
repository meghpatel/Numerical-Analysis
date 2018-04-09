#include <iostream>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

//declaring functions
int sum(int*, int);
int* mul(int*,int*, int);

int main()
{
    int n;
    cout<<"Enter the no. of values"<<endl;
    cin>>n;

    //taking the values from user
    //float x[n],y[n],xy[n];
    int* x = (int *)malloc(n * sizeof(int));
    int* y = (int *)malloc(n * sizeof(int));
    int* xy = (int *)malloc(n * sizeof(int));
    int sumx=0,sumy=0,sumxy=0,sumx2=0,sumy2=0,num=0,temp1,temp2;
    float corr = 0.0,den=0.0;
    cout<<"Enter the values of X"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"Enter the values of Y"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }

    sumx = sum(x,n);
    sumy = sum(y,n);

    xy = mul(x,y,n);
    sumxy = sum(xy,n);

    x = mul(x,x,n);
    y = mul(y,y,n);
    sumx2 = sum(x,n);
    sumy2 = sum(y,n);

    //Pearsons formulA
    num = n*sumxy - (sumx)*(sumy);
    temp1 = (n*sumx2)-(sumx2*sumx2);
    temp2 = (n*sumy2)-(sumy2*sumy2);
    den = (sqrt(temp1))*(sqrt(temp2));
    //temp1 = 25;
    //den = sqrt(temp1);
    corr = (float)num/den;

//    printf("Numerator: %fCorrelation coefficient: %f",corr);
    cout<<"Numerator: "<<temp1<<" Denominator: "<<temp2<<" Correlation coefficient: "<<corr<<endl;
}


//sum function
int sum(int* x,int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=x[i];
    }
    return sum;
}

//multiplication function
int* mul(int *x,int *y,int n)
{
    int* xy = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        xy[i] = x[i]*y[i];
    }
    return xy;
}
