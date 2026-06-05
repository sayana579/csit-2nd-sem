#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int a,b,c, discriminant,root1,root2;
cout<<"enter coefficient a,b,c:";
cin>>a>>b>>c;
discriminant=b*b-4*a*c;

if(discriminant>0)
{
	root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
	cout<<"roots are real and different."<<endl;
	cout<<"root1="<<root1<<endl;
	cout<<"root1="<<root1<<endl;
}
else
if(discriminant==0)
{
	cout<<"roots are real and equal";
	cout<<"root="<<root1<<endl;}
	else
	{
		double realpart= -b/(2*a);
		double imaginerypart=sqrt(-discriminant)/(2*a);
		cout<<"roots are complex and different."<<endl;
		cout<<"root1="<<realpart<<"+"<<imaginerypart<<"i"<<endl;
		cout<<"root2="<<realpart<<"-"<<imaginerypart<<"i"<<endl;
	}
	return 0;
}
