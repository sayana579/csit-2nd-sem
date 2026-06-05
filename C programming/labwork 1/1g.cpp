#include<iostream>
using namespace std;
int main()
{
	int seconds,hrs,mins,secs;
	cout<<"enter the time in sec:";
	cin>>seconds;
	
	hrs=seconds/3600;
	seconds=seconds%3600;
	mins=seconds/60;
	secs=seconds%60;
	
	cout<<"time:"<<hrs<<"hours,"<<mins<<"minutes,"<<secs<<"seconds,";
	return 0;
}
	
