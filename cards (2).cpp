#include<iostream>
using namespace std;
//4 cards S,H,D,C numbered from 01 to 13 are available
//enter a string of the format card name followed with its number(ex:S01H04C13)
//output must be:
//(1) it must display the card name and no of times the card with same name(i.e. card number must be 
//different)is repeated:
//(2) if the card name with same number is repeated then it must show error for that card name
// ex:S01H03S01
//  S:ERROR
//  H:3
//(3)if u enter number other than 01-13 then that card must not be counted:
//if u enter card number other than S,H,D,C then it will not display the number of 
//cards of that particular card
//(4)if any card name is not satisfying the criteria then it must not be displayed in the output:
//example is:
//enter a string:S12H80D01Y12C19S01
//S:2
//ERROR(As H card number is more than 13)
//D:1
int main()
{
	char ch[100];
	cout<<"\n enter the string:";
	cin>>ch;
	int n=0;
	for(int i=0;ch[i]!='\0';i++)
	{
    	n++;
	}
	int qs[n],qc[n],qh[n],qd[n];
	int ss=0,sc=0,sh=0,sd=0;
	int j=0;
	int p=0;
	int ks=0,kc=0,kd=0,kh=0;
	int k=0;
	while(p<n)
	{
	  if(p%3==0)
	  {
		 int i=1;
		 while(i!=3)
		 {
		 if(ch[p+i]>='0' && ch[p+i]<='9')
	      {
	       k=k*10+ch[p+i]-48;	
	      }
	        i++;
   	    }
   	  switch(ch[p])
	  {
  	  	case 'S':
	  	if(k>=1 && k<=13)
		  {
		  	qs[ks]=k;
		  	   for(int i=0;i<=ks;i++)
				 {
				   if(qs[ks]==qs[i-1])
				     {
				      ss++;					   	
					 } 	
				 }	
  		     ks++;
  	      }
 	  		break;
		case 'C':
		if(k>=1 && k<=13)
		{
		  	qc[kc]=k;
		        for(int i=0;i<=kc;i++)
				 {
				   if(qc[kc]==qc[i-1])
				     {
				      sc++;					   	
					 } 	
				 }	
	  		kc++;
	    }
	  		break;
		case 'H':
		if(k>=1 && k<=13)
		{
		  	qh[kh]=k;
	       for(int i=0;i<=kh;i++)
				 {
				   if(qh[kh]==qh[i-1])
				     {
				      sh++;					   	
					 } 	
				 }	
	  		kh++;
	     }
	  		break;
		case 'D':
		if(k>=1 && k<=13)
		{
		  	qd[kd]=k;
			   for(int i=0;i<=kd;i++)
				 {
				   if(qd[kd]==qd[i-1])
				     {
				      sd++;					   	
					 } 	
				 }	
	  		kd++;
	    }
	  		break;		  		    		
	   }
      }
         k=0;
         p=p+3;
	}
	 p=0;
   int gs=0,gc=0,gh=0,gd=0;
	while(p<n)
	{
		if(p%3==0)
		{
		  switch(ch[p])
		  {
		  	case 'S':
		  		if(ss>0 && gs==0)
		  		  {
		  		  	cout<<"ERROR"<<endl;
		  		  	gs++;
				  }
		  		else if(ks!=0 && gs==0)
			  		cout<<ch[p]<<":"<<ks<<endl;
			  		gs=1;
			  		break;
		    case 'C':
		    		if(sc>0 && gc==0)
		  		  {
		  		  	cout<<"ERROR"<<endl;
		  		  	gc++;
				  }
		  		if(kc!=0 && gc==0)
			  		cout<<ch[p]<<":"<<kc<<endl;
			  		gc=1;
			  		break;
		    case 'H':
		    		if(sh>0 && gh==0)
		  		  {
		  		  	cout<<"ERROR"<<endl;
		  		  	gh++;
				  }
		  		if(kh!=0 && gh==0)
			  		cout<<ch[p]<<":"<<kh<<endl;
			  		gh=1;
			  		break;
		    case 'D':
		    		if(sd>0 && gd==0)
		  		  {
		  		  	cout<<"ERROR"<<endl;
		  		  	gd++;
				  }
		  		if(kd!=0 && gd==0)
			  		cout<<ch[p]<<":"<<kd<<endl;
			  		gd=1;
			  		break; 			  			  	  		
		  }
		}
		p+=3;
	}
}
