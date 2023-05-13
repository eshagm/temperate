#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,fact=1;
	clrscr();
	printf("enter number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    fact*=i;
	    printf("%d\t",i);
	}
	printf("fact =%d",fact);
	getch();
}                  