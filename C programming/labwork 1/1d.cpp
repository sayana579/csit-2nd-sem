#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number:";
	cin>>a;
	
	if(a%5==0 && a%11!=0)
		cout<<a<<" is the multiple of 5 but not 11";
		else
			cout<<a<<" is not the multiple of 5 but not 11";
	
	return 0;
}
