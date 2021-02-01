#include<iostream>
using namespace std;
void fibonacci(int n);
int main()
{
	int n;
	cout<<"Enter a number to calculate the fibonacci series :\t";
	cin>>n;
	fibonacci(n);
	
	return 0;
}


void fibonacci(int n)
{
	int f=0,s=1,t;
	cout<<f<<" "<<s<<" ";
	for(int i=1;i<=n;i++)
	{
		t=s+f;
		cout<<t<<" ";
		f=s;
		s=t;
	}
}
