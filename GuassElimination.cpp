//Megh K. Patel
//16BIT020
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int t;
void display(float **,int,int);//prints array
float** guassEle(float **,int,int);
float* result(float**, float*,float *,int, int);

int main()
{
	cout<<"Enter the number of equations"<<endl;
	int m,n;
	cin>>m;
	cout<<"Enter the number of variables"<<endl;
	cin>>n;
	n = n + 1;
	float **a = (float **)malloc(m * sizeof(float *));
	for(int i=0;i<m;i++)
	{
		a[i] = (float *)malloc(n * sizeof(float));
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==n-1)
			{
				cout<<"\nEnter the constant for equation "<<i+1<<endl;

			}
			else
			{
				cout<<"\nEnter the coefficient for variable "<<j+1<<" of equation "<<i+1<<endl;
			}
			cin>>*(*(a+i)+j);
		}
	}
	float **b = (float **)malloc(m * sizeof(float *));
	for(int i=0;i<m;i++)
	{
		b[i] = (float *)malloc(n * sizeof(float));
	}
	b=guassEle(a,m,n);
	//display(b,m,n);
	float con[m];
	for(int i=0;i<m;i++)
	{
		con[i] = a[i][n-1];
	}
	for(int i=0;i<m;i++)
	{
		printf("\n%f ",con[i]);
	}
	float* solu = (float *)malloc(m * sizeof(float));
	for(int i=0;i<m;i++)
		solu[i]=1;
	solu = result(b,con,solu,m,n);
	for(int i=0;i<m;i++)
	{
		printf("\nX%d is:%f\n",i+1,solu[i]);
	}
	return 0;
}

void display(float **a,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<*(*(a+i)+j);
		}
		cout<<endl;
	}
}

float** guassEle(float** a,int m,int n)
{
	int temp[n],ctr,t=m-1,j=0;
	float mul;
	for(int i=m-1;i>=0;i--)
	{
		ctr=0;
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				ctr++;
			}
			if(ctr==n)
			{
				for(int j=0;j<n;j++)
				{
					temp[j] = a[t][j];
					a[t][j] = 0;
					a[i][j] = temp[j];
				}
				t--;
			}
		}
	}
	//printf("\n%d\n",t);
	for(int i=0;i<t;i++)
	{
		j = i + 1;
		for(j=i+1;j<t+1;j++)
		{
			mul = -(a[j][i]/a[i][i]);
			//printf("\n%f\n",mul);
			for(int k=0;k<n;k++)
			{
				a[j][k] = mul*a[i][k] + a[j][k];
			}
		}
	}
	return a;
}


float* result(float** b,float* con,float* solu,int m, int n)
{
	float temp1;
	for(int i=m-1;i>=0;i--)
    {
        temp1=0;
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            {
                temp1+=b[i][j]*solu[j];
            }

        }
        solu[i]=(con[i]-temp1)/b[i][i];
    }
	return solu;
}
