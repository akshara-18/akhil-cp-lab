#include<stdio.h>
void main()
{
 int num,a,rev=0,rem=0;
 printf("enter the number:");
 scanf("%d",&num);
a=num;
 while(num>0)
	{
	   rem=num%10;
	   rev=rev*10+rem;
	   num=num/10;
         }
if(a==rev)
{
	printf("palindrome");
}
else
{
	printf("not palindrome");
}
}
