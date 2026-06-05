#include<iostream>
using namespace std;
int main(void)
{
	int a,b,temp;
	cout<<"enter the first and second number"<<endl;
	cin>>a>>b;
	
	cout<<"before swapping:"<<a<<","<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping:"<<a<<","<<b<<endl;
	return 0;
}

