#include<iostream>
#include<cmath>
using namespace std;
void matrix_mul(int a[3][3], int b[3][3]);
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
	
	
	matrix_mul(a,b);
	
	return 0;
}


void matrix_mul(int a[3][3], int b[3][3])
{
	int mul[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			mul[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
		}
	}
	
	
	
	
	
	cout<<"Matrix multiplication is -"<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<mul[i][j]<<" ";
		}
		
		cout<<endl;
	}

}
