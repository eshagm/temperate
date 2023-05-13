#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=0;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);
	while (n>0)
	{
	   n/=10;
	   i+=1;

	}
	printf("%d\t",i);

	getch();
}                  