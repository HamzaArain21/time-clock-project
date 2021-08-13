#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
	//data types
	int h,m,s,a,r;
	
	r=a=0;
	//condition
	
	while(r==0)
	{
		cout<<"Enter  hour"<<endl;
		cin>>h;
		
		cout<<"Enter min"<<endl;
		cin>>m;
		
		cout<<"Enter seconds"<<endl;
		cin>>s;
		
		if(h<=24 && m<60 &&s<60)
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
		if(h>=12)
		{
			cout<<h<<":"<<m<<":"<<s<<"  pm"<<endl;
		}
		else
		{
			cout<<h<<":"<<m<<":"<<s<<"  am"<<endl;
		}
		Sleep(1000);
		s++;
		if(s>59)
		{
			s=0;
			m++;
		}
		if(m>59)
		{
			m=0;
			h++;
		}
		if(h>24)
		{
			h=0;
		}
		
	}
	return 0;
}

