#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter the number of equations: "<<endl;
	int n;
	cin>>n;
	float a[n][n], const[n];
	cout<<"Enter the coefficients of Equations."<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter the value of equation "<<i<<" and coefficient "<<j<<" :"<<endl;
			cin>>a[i][j];
		}
	}
	int x[n]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			x[j] = ()/a[i][]
		}
	}
}


