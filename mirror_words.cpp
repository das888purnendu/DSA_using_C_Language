#include<iostream>
using namespace std;

int main()
{
	int i=0,j=0;
	char str[100],temp[50];
	cin.getline(str,100);
	
	while(1)
	{
	
		if(str[i]!=' ' && str[i]!='\0')
		{
			cout<<str[i];
			temp[j]=str[i];
			j++;
		}
		else
		{
			cout<<"|";
			for(int k=j-1;k>=0;k--)
			{
				cout<<temp[k];
			}
			j=0;
			cout<<" ";
		}
		
		if(str[i]=='\0')
		{
			break;
		}
		else
		{
			i++;
		}
		
		
	}
	

	
	return 0;
}
