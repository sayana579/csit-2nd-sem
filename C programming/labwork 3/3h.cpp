#include<iostream>
using namespace std;
int main()
{
	int digit,num,sum=0;
	cout<<"enter the num";
	cin>>num;
	int temp=num;
	while(temp!=0)
	{
		digit =temp %10;
		sum=sum +digit;
		temp=temp/10;
	}
	cout<<"sum of digit of"<<num<<" "<<"is"<<sum;
	return 0;
	}
