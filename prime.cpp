#include<iostream>
#include<cmath>
using namespace std;
void isprime(long long int n);
int main()
{
	long long int n;
	cout<<"Enter a number to check prime or not :\t";
	cin>>n;
	isprime(n);
	
	return 0;
}


void isprime(long long int n)
{
	long long int i,rt=ceil(pow(n,0.5)),st=1;
	
	
	if(n==2)
	{
		cout<<n<<" Number is a prime number !";
		
		return;
	}
	
	else if(n==1)
	{
		cout<<n<<" Number is not a prime number !";
		
		return;
	}
	else if(n<1)
	{
		cout<<n<<" Enter a possitive integer number !";
		
		return;
	}
	
	
	for(long long int i=2;i<rt;i++)
	{
		if(n%i==0)
		{
			st=0;
			break;
		}
	}
	
	if(st)
	{
		cout<<n<<" Number is a prime number !";
	}
	
	else
	{
		cout<<n<<" Number is not a prime number !";
	}
	
	
}
