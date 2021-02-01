#include<iostream>

using namespace std;
void ispalindrome(int n);
int main()
{
	int n;
	cout<<"Enter a number to check palindrome or not :\t";
	cin>>n;
	ispalindrome(n);
	
	return 0;
}


void ispalindrome(int n)
{
	int sum,temp=n,rem;
	
	while (temp>0)
	{
		rem = temp%10;
		sum=(sum*10)+rem;
		temp=temp/10;
	}
	
	if(sum==n)
		cout<<n<<" is a Palindrome number";
	
	else
		cout<<n<<" is not a palindrome number";
	

	
	
}
