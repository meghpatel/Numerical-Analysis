#include <iostream>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int* selectionSort(int*,int);
int* mul(int*,int*, int);
int* diff(int*,int*,int);
int sum(int*, int);

int main()
{
    int n,t,sumd=0;
    float ans = 0.0;
    cout<<"Enter the no. of values"<<endl;
    cin>>n;
    //taking the values from user
    //float x[n],y[n],xy[n];
    int* x = (int *)malloc(n * sizeof(int));
    int* y = (int *)malloc(n * sizeof(int));
    int* rankx = (int *)malloc(n * sizeof(int));
    int* ranky = (int *)malloc(n * sizeof(int));
    int* d = (int *)malloc(n * sizeof(int));

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

    //Sort and Assign rank
    rankx = selectionSort(x,n);
    ranky = selectionSort(y,n);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<rankx[i];
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<" "<<ranky[i];
    }
    cout<<endl;
    //Find difference
    d = diff(rankx,ranky,n);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<d[i];
    }
    cout<<endl;
    d = mul(d,d,n);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<d[i];
    }
    cout<<endl;

    //Summation of D
    sumd = sum(d,n);
    cout<<"Sum of d^2 is: "<<sumd<<endl;
    //Rank coefficient
    ans = 1.0 - (((float)6*sumd)/((float)(n*(n*n-1))));
    cout<<"Rank coefficient is: "<<ans;

}

int* selectionSort(int* a,int n)
{
    int var,t=n,index,max=0;
    //set max to the minimum value possible for a datatype;
    int* temp = (int *)malloc(n * sizeof(int));
    int* rank = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        temp[i]=a[i];
    }
    sort(temp,temp+n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==temp[j])
            {
                rank[i] = t-j;
            }
        }
    }
    return rank;
}

int* mul(int *x,int *y,int n)
{
    int* xy = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        xy[i] = x[i]*y[i];
    }
    return xy;
}

int* diff(int *x,int*y,int n)
{
    int* diff = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        diff[i] = x[i] - y[i];
    }
    return diff;
}

int sum(int* x,int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=x[i];
    }
    return sum;
}
