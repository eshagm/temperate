#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=0,fd,ld;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);

	ld=n%10;
	while(n>=10)
	{
	   n=n/10;
	}
	fd=n;
	i=fd+ld;
	printf("fd and ld=%d",i);

	getch();
}