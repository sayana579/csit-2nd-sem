#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number";
	cin>>a;
	
	if(a%5==0)
	{
		cout<<"It is the multiple of 5";
	}
	else
	if(a%11==0)
	{
		cout<<"it is the multiple of 11";
	}
	else
	cout<<"It is not the multiple of both 5 and 11";
	return 0;
}
