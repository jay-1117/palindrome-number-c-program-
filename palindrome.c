#include<stdio.h>

int main()

{
	int n,sum=0,r,value;
	
	printf("enter the number:");
	scanf("%d",&n);
	value=n;
	
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(value==sum)
	{
		printf("palindrome");
		
	}
	else{
		printf("not a palindrome");
	}
}
