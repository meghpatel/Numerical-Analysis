#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of elements"<<endl;
    int n;
    cin>>n;
    int a[n][n];
    cout<<"Enter the values of y"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            a[j][i+1]=a[j+1][i]-a[j][i];
        }
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i][0]<<endl;
    }*/
}
