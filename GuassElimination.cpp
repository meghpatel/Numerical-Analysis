//Megh Patel
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void display(int **,int,int);//prints array

int main()
{
	cout<<"Enter the dimentions of matrix-RowXColumns"<<endl;
	int m,n;
	cin>>m>>n;
	int **a = (int **)malloc(m * sizeof(int *));
	for(int i=0;i<m;i++)
	{
		a[i] = (int *)malloc(n * sizeof(int));
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
	display(a,m,n);
	return 0;
}

void display(int **a,int m,int n)
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
