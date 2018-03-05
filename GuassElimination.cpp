//Megh K. Patel
//16BIT020
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void display(float **,int,int);//prints array
float** guassEle(float **,int,int);

int main()
{
	cout<<"Enter the dimentions of matrix-RowXColumns"<<endl;
	int m,n;
	cin>>m>>n;
	float **a = (float **)malloc(m * sizeof(float *));
	for(int i=0;i<m;i++)
	{
		a[i] = (float *)malloc(n * sizeof(float));
	}
	cout<<"\nEnter the Array"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter a["<<i<<"]["<<j<<"]: ";
			cin>>*(*(a+i)+j);
		}
	}
	float **b = (float **)malloc(m * sizeof(float *));
	for(int i=0;i<m;i++)
	{
		b[i] = (float *)malloc(n * sizeof(float));
	}
	b=guassEle(a,m,n);
	display(b,m,n);
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
	int temp;
	
	return a;
}
