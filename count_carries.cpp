#include<iostream>
using namespace std;
// counting no.of carryings when two numbers are added
int main()
{
	int n1,n2,c=0,d1=0,d2=0,cnt=0;
	// input  2 numbers
	cout<<"Enter n1,n2 values\n";
	cin>>n1;
	cin>>n2;
	while(n1>0 && n2>0)
	{
		d1 = n1%10;
		d2 = n2%10;
		if(d1+d2+c>9)
		{
			c=1;
		}
		else
		  c=0;
		if(n1>9 || n2>9)//coz if it is the last digit then it doesnot come under carry
		   cnt=cnt+c;
		n1/=10;
		n2/=10;
	}
	while(n1>0)
	{
		d1 = n1%10;
		if(d1+c>9)
		{
			if(n1>9)//coz if it is the last digit then it doesnot come under carry
		      cnt++;
			c=1;
		}
		else
		c=0;
		n1/=10;		
	}
	while(n2>0)
	{
		d1 = n2%10;
		if(d1+c>9)
		{
			if(n2>9) //coz if it is the last digit then it doesnot come under carry
			cnt++;
			c=1;
		}
		else
		c=0;
		n2/=10;		
	}
	cout<<"count of carries:"<<cnt;
}
