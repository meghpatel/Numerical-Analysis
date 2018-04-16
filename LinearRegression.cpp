#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    float sumx=0.0,sumy=0.0,sumxy=0.0,sumx2=0.0,sumy2=0.0,bxy=0.0,byx=0.0,avgx=0.0,avgy=0.0;
    int n;
    
    cout<<"Enter the number of data: "<<endl;
    cin>>n;
    
    float* x = (float *)malloc(n * sizeof(float));
    float* y = (float *)malloc(n * sizeof(float));
    
    cout<<"Enter the x values: "<<endl;
    for(int i=0;i<n;i++)
    {
    	cin>>x[i];
    }
    cout<<"Enter the y values: "<<endl;
    for(int i=0;i<n;i++)
    {
    	cin>>y[i];
    }
    
    for(int i=0;i<n;i++)
    {
    	sumx+=x[i];
    	sumy+=y[i];
    	sumxy+=x[i]*y[i];
    	sumx2+=x[i]*x[i];
    	sumy2+=y[i]*y[i];
    }
    
    bxy = (n*sumxy - sumx*sumy)/(n*sumy2 - sumy*sumy);
    byx = (n*sumxy - sumx*sumy)/(n*sumx2 - sumx*sumx);
    
    avgx = sumx/(float)n;
    avgy = sumy/(float)n;
    
    cout<<"The regression of x on y is :"<<endl;
    cout<<"x - "<<avgx<<" = "<<bxy<<" (y - "<<avgy<<" )"<<endl;
    
    cout<<"The regression of y on x is :"<<endl;
    cout<<"y - "<<avgy<<" = "<<byx<<" (x - "<<avgx<<" )"<<endl;
}
