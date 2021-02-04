#include<iostream>
using namespace std;

int main()
{
	int i=0,j=0;
	char str[100];
	cin.getline(str,100);
	
	while(str[i]!='\0')
	{
	
		if(i%2==0)
		{
			
			if(str[i]>=65 && str[i]<=90)
			{
				printf("%c",str[i]+32);
			}
			
			else
			{
				cout<<str[i];
			}
		}
		
		else
		{
			if(str[i]>=95 && str[i]<=122)
			{
				printf("%c",str[i]-32);
			}
			
			else
			{
				cout<<str[i];
			}
		}
		
		i++;
	}
	

	
	return 0;
}
