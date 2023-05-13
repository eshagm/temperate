#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,f1=0,f2=1,fs;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	  printf("%d\t",f1);
	  fs=f1+f2;
	  f1=f2;
	  f2=fs;

	}

	getch();
}