#include<iostream>
using namespace std;

int main()
{
	int i=0,j,k=0,status=1;
	char str[100];
	cin.getline(str,100);
	
	while(str[i]!='\0')
	{
		i++;
	}
	
	for(j=i-1;j>i/2;j--)
	{
		if(str[k]!=str[j])
		{
			status=0;
			break;
		}
		k++;
	}
	
	if(status)
	{
		cout<<endl<<"String is palindrome";
	}
	else
	{
		cout<<endl<<"String is not a palindrome";	
	}
	
	
	return 0;
}
