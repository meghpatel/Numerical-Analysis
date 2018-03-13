#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter the number of equations: "<<endl;
	int n;
	cin>>n;
	float coeff[n][n], cons[n];
	cout<<"Enter the coefficients of Equations."<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter the value of equation "<<i<<" and coefficient "<<j<<" :"<<endl;
			cin>>coeff[i][j];
		}
		cout<<"Enter the constant term: "<<endl;
		cin>>cons[i];
	}
	float x[n];
	for(int i=0;i<n;i++)
	{
		x[i] = 0.0;
	}
	int t=0,m;
	float sum=0;
	cout<<"Enter the number of iterations: "<<endl;
	cin>>m;
	for(int k=0;k<m;k++)
	{
		t=0;
		for(int i=0;i<n;i++)
		{
			sum = cons[i];
			for(int j=0;j<n;j++)
			{
				if(i==j)
				{
					continue;
				}
				sum = sum - (coeff[i][j] * x[j]);
			}
			sum = sum/(coeff[i][t]);
			t++;
			x[i] = sum;
		}
		for(int i=0;i<n;i++)
		{
			printf("%f ",x[i]);
		}
		printf("\n");
	}
}


