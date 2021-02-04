#include<iostream>
using namespace std;

int main()
{
	int i=0;
	char str[100];
	cin.getline(str,100);
	
	while(str[i]!='\0')
	{
		i++;
	}
	
	cout<<"Reverse is :"<<endl;
	
	for(int j=i-1;j>=0;j--)
	{
		cout<<str[j];
	}
	
	return 0;
}
