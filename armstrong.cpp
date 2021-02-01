#include<iostream>
#include<cmath>
using namespace std;
void isarmstrong(int n);
int main()
{
	int n;
	cout<<"Enter a number to check palindrome or not :\t";
	cin>>n;
	isarmstrong(n);
	
	return 0;
}


void isarmstrong(int n)
{
	int len=0,temp=n,sum=0,rem;
	
	while (temp>0)
	{
		temp=temp/10;
		len++;
	}
	
	temp=n;
	
	for(int i=0;i<len;i++)
	{
		rem=temp%10;
		sum=sum+(pow(rem,len));
		temp=temp/10;
	}
	
	

	
	if(sum==n)
		cout<<n<<" is a Armstrong number";
	
	else
		cout<<n<<" is not a Armstrong number";
	

	
	
}
