#include<iostream>
using namespace std;
void factorial(int n);
int main()
{
	int n;
	cout<<"Enter a number to calculate the factorial :\t";
	cin>>n;
	factorial(n);
	
	return 0;
}


void factorial(int n)
{
	int f=1;

	for(int i=n;i>0;i--)
	{
		f*=i;
	}
	
	cout<<"Factorial is :\t"<<f;
}
