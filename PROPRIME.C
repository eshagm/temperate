#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,pr=0;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);

	if(n==0||n==1)
	   pr=1;
	for(i=2;i<=n/2;i++)
	{
	   if(n%i==0)
	   {
	      pr=1;
	   }
	}
	if(pr==0)
	{
	   printf("this is prime number",n);
	}
	else
	{
	   printf("this is not prime number",n);
	}
	getch();
}