#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	
	if(a%b==0)
	{
		cout<<a<<" is the multiple of "<<b<<endl;
	}
	else
	{
		cout<<a<<" is not the multiple of "<<b<<endl;
	}
	return 0;
}
