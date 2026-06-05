#include<iostream>
using namespace std;
int main()
{
	int marks[5],total=0;
	float percentage;
	
	cout<<"enter the marks in 5 subjects:";
	
	for(int i=0;i<5;i++)
	{
		cin>>marks[i];
		total+=marks[i];
	}
	percentage=total/5.0;
	cout<<"total marks is:"<<total<<endl;
	cout<<"percentage is:"<<percentage<<"%";
	return 0;
}
