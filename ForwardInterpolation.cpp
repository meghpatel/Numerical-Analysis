#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int factorial(int);
int main()
{
    cout<<"Enter the number of elements"<<endl;
    int n;
    cin>>n;
    float y[n][n],x[n];
    cout<<"Enter the values of x"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"Enter the values of y"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>y[i][0];
    }
    cout<<"Enter the values of x at which you want to find the y"<<endl;
    float xp;
    cin>>xp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            //printf("\n%f %f\n",a[j+1][i],a[j][i]);
            y[j][i+1]=y[j+1][i]-y[j][i];
        }
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {
            cout<<y[j][i]<<"\t";
        }
        cout<<endl;
    }
    float t;
    float p = (xp - x[0])/(x[1]-x[0]);
    printf("P = %f\n",p);
    float sum = 0,x1;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            t=1;
            //printf("\n%f\n",t);
        }
        else
        {
            t=t*(p-(i-1));
        }
        x1 = y[0][i]*(t/factorial(i));
        //printf("\n%f\n",x1);
        sum = sum + x1;
    }
    printf("\nSUM is %f\n",sum);
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i][0]<<endl;
    }*/
}


int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
