#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int n,i;

printf("Enter no.\n");
scanf("%d",&n);
for(i=2;i<=(n/2);i++)
{
if(n%i==0)
{
printf("not prime");
break;
}
 else
 {
 printf("prime");
 break;
 }
 }
getch();
}