#include<iostream>

using namespace std;

void num_pyramid(int n);

int main()
{
	int n;
	
	cout<<"Enter a number to print number pyramid :";
	cin>>n;
	
	num_pyramid(n);
}

void num_pyramid(int n)
{
	int num=1,sp=n-1,dig=1;
	
	cout<<"Simple Pyramid -"<<endl;
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<sp;j++)
		{
			cout<<" ";
		}
		sp--;

		num=1;
		for(int k=0;k<dig;k++)
		{
			cout<<num++;
		}
		dig+=2;
		cout<<endl;
	}
	
	
	num=1,sp=n-1,dig=1;
	
	cout<<"\n\nMirror Pyramid -"<<endl;
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<sp;j++)
		{
			cout<<" ";
		}
		sp--;

		num=1;
		for(int k=0;k<dig;k++)
		{
			if(k<dig/2)
			{
				cout<<num++;
			}
			else
			{
				cout<<num--;
			}
			
		}
		dig+=2;
		cout<<endl;
	}
	

}
