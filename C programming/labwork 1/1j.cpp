#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter a year(e.g.2012)";
	cin>>year;
	
	if((year%4==0 && year%100!=0)||(year%400==0))
	{cout<<year<<"is a leap year";
	}
	else
	{cout<<year<<"is not a leap year";
	}
	return 0;}
