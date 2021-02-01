#include<iostream>

using namespace std;

void alpha_pyramid(int n);

int main()
{
	int n;
	
	cout<<"Enter a number to print alpha pyramid :";
	cin>>n;
	
	alpha_pyramid(n);
}

void alpha_pyramid(int n)
{
	int alpha=65,sp=n-1,dig=1;
	
	cout<<"Simple Pyramid -"<<endl;
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<sp;j++)
		{
			cout<<" ";
		}
		sp--;

		alpha=65;
		for(int k=0;k<dig;k++)
		{
			printf("%c",alpha++);
		}
		dig+=2;
		cout<<endl;
	}
	
	
	alpha=65,sp=n-1,dig=1;
	
	cout<<"\n\nMirror Pyramid -"<<endl;
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<sp;j++)
		{
			cout<<" ";
		}
		sp--;

		alpha=65;
		for(int k=0;k<dig;k++)
		{
			if(k<dig/2)
			{
				printf("%c",alpha++);
			}
			else
			{
				printf("%c",alpha--);
			}
			
		}
		dig+=2;
		cout<<endl;
	}
	

}
