#include<iostream>
using namespace std;
//expressing a number as the product of prime numbers:
int main()
{
	int n;
	cout<<"\n enter a number:";
	cin>>n;
	if (n==1)
	{
		return 1;
	}
	int i=2;
	while (n>1)
	{
	  if (n%i==0)
	    {
	       cout<<i<<" ";
	       n=n/i;
		}
	  else
	    {
	       i++;	
		}	
	}
		
}
