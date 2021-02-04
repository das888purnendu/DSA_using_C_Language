#include<iostream>
using namespace std;

int main()
{
	int i,j,sp,n;
	cout<<"Please enter row number : ";
	cin>>n;
	sp=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<sp;j++)
		{
			cout<<" ";
		}
		
		for(j=1;j<(i*2);j++)
		{
			cout<<"*";
		}
		sp--;
		cout<<endl;
	}
	return 0;
}
