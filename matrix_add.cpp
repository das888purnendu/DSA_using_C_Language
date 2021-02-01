#include<iostream>
#include<cmath>
using namespace std;
void matrix_add(int a[3][3], int b[3][3]);
int main()
{
	int a[3][3],b[3][3];
	cout<<"Enter two 3*3 matrix to add"<<endl;
	
	cout<<"Enter First matrix :"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"A["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
	
	cout<<"Enter Second matrix :"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"B["<<i<<"]["<<j<<"] = ";
			cin>>b[i][j];
		}
	}
	
	
	matrix_add(a,b);
	
	return 0;
}


void matrix_add(int a[3][3], int b[3][3])
{
	int sum[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	cout<<"Sum matrix is -"<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		
		cout<<endl;
	}

}
