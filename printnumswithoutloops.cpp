/* write a code to print 1-10 without loops*/
#include<iostream>
using namespace std;
void printnums(int f,int l)
{
	if(f<=l)
	   cout<<f<<" ";
	printnums(f+1,l);
}
int main()
{
	int f,l;
	cout<<"\n enter the starting number:";
	cin>>f;
	cout<<"\n enter the last number:";
	cin>>l;
	printnums(f,l);
}
