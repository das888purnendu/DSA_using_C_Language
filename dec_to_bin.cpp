#include<iostream>

using namespace std;

void dec_to_bin(int n);

int main()
{
	int n;
	
	cout<<"Enter a number to convert Decimal to Bin :";
	cin>>n;
	
	dec_to_bin(n);
}

void dec_to_bin(int n)
{
	int t=n,c=0,a[100];
	
	while (t>0)
	{
		a[c]=t%2;
		t=t/2;
		c++;
	}
	
	cout<<"Binary is :"<<endl;
	for(int i=c-1;i>=0;i--)
	{
		cout<<a[i];
	}
}
