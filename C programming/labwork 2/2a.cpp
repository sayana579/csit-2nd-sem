#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"enter the four digit number:";
	cin>>num;
	
	while(num!=0)
	{
	 sum+=num%10;
	 num/=10;	
	}
	cout<<"sum of its digit num is:"<<sum;
	return 0;
}
	
