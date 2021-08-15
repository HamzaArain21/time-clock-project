#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	//data types
	int hour,min,sec,a,r;
	
	r=a=0;
	//condition
	
	while(r==0)
	{
		cout<<"Enter the hour"<<endl;
		cin>>hour;
		
		cout<<"Enter the miniutes"<<endl;
		cin>>min;
		
		cout<<"Enter the seconds"<<endl;
		cin>>sec;
		
		if(hour<=24 && min<60 &&sec<60)
		{
			r++;
		}
		else
		{
			system("cls");
		}
	}
	while(a==0)
	{
		system("cls");
		if(hour>=12)
		{
			cout<<hour<<":"<<min<<":"<<sec<<"  pm"<<endl;
		}
		else
		{
			cout<<hour<<":"<<min<<":"<<sec<<"  am"<<endl;
		}
		Sleep(1000);
		sec++;
		if(sec>59)
		{
			sec=0;
			min++;
		}
		if(min>59)
		{
			min=0;
			hour++;
		}
		if(hour>24)
		{
			hour=0;
		}		
	}
	return 0;
}
