#include<iostream>
#include<cmath>
using namespace std;
void swap(int a, int b);
int main()
{
	int a,b;
	cout<<"Enter two numbers to swap-"<<endl;
	cout<<"A= ";
	cin>>a;
	
	cout<<"B= ";
	cin>>b;
	
	swap(a,b);
	
	return 0;
}


void swap(int a, int b)
{
	a=a*b;
	b=a/b;
	a=a/b;
	
	cout<<"Now, A= "<<a<<" B= "<<b;
	

}
