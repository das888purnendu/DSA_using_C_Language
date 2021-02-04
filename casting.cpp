#include<iostream>
using namespace std;

int main()
{
	int var1=1500000000;
	var1 = ((static_cast<double>(var1))*10)/10;
	cout<<var1;
	return 0;
}
