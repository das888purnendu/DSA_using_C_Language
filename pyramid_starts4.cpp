#include<iostream>
using namespace std;

int main()
{
	int i,j,sp,n;
	cout<<"Please enter row number : ";
	cin>>n;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<i;j++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	return 0;
}
