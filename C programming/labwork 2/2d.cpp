#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the three numbers:",
	cin>>a>>b>>c;
	
	cout<<"sum of the values:"<<a+b+c<<endl;
	cout<<"average of three values:"<<(a+b+c)/3<<endl;
	
	if(a>b)
	{
		if(a>c)
		cout<<"largest of three"<<a<<endl;}
		if(b>c)
		{
			cout<<"largest of three"<<b<<endl;
		}
		else
		{
			cout<<"largest of three:"<<c<<endl;
		}
	
	
	if(a<b)
	{if(a<c)
	cout<<"smallest of three:"<<a<<endl;
	}
	if(b<c)
	{
	if(b<a)
	cout<<"smallest of three:"<<b<<endl;
	}
	else
	{
	cout<<"smallest of three:"<<c<<endl;
	}
	
	return 0;
}
