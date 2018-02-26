//Megh Patel

#include<iostream>
using namespace std;

void display();//prints array

int main()
{
	cout<<"Enter the dimentions of matrix-RowXColumns"<<endl;
	int m,n;
	cin>>m>>n;
	int a[m][n];
	cout<<"\nEnter the Array"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j]; 
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
