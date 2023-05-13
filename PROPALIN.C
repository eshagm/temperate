#include<stdio.h>
#include<conio.h>

void main()
{
	int n,r=0,rev,temp;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);

	temp=n;
	while(n>0)
	{
	   rev=n%10;
	   r=(r*10)+rev;
	   n=n/10;
	}
	if(temp==r)
	{
	   printf("this is palindrome");
	}
	else
	{
	   printf("this is not palindrome");
	}


	getch();
}