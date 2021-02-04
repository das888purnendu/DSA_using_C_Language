#include<iostream>
#include<conio.h>

// Words Count


using namespace std;

enum{False,True};
int main(){
	char ch,temp[100];
	int words=0,i=0;
	
	while (True)
	{
		ch=getche();
		if(ch>=32)
		{
			if(ch==' ' || ch=='.' || ch=='!' || ch=='?' || ch==';' || ch==':')
			{
				words++;
				cout<<endl<<"New Word Found : \t";
				for(int j=0;j<i;j++)
				{
					cout<<temp[j];
				}
				i=0;
				cout<<endl;
			}
			else
			{
				temp[i]=ch;
				i++;
			}
		}
		
		else
		{
			break;
		}
	}
	
	
	
	
	if(i)
	{
		cout<<endl<<"Total Words = "<<words+1;
	}
	else
	{
		cout<<endl<<"Total Words = "<<words;
	}
	
	return 0;
}
