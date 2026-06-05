#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,orgnum,remainder,sum=0;
	cout<<"enter an integer number:"<<endl;
	cin>>a;
	orgnum=a;
	
	while(a>0)
	{
		remainder=a%10;
		sum+=static_cast<int>(pow(remainder,3));
		a/=10;}
	
	
	{
			if(sum==orgnum)
		{cout<<"It is the armstrong num.";}
		else
		{cout<<"It is not the armstrong num.";}
	
}
	return 0;
	}

