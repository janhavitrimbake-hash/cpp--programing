#include<stdio.h>
#include<conio.h>
int multiply(int a,int b)
{
	if(b==0)
	return 0;
	else
	return a+multiply(a,b-1);
}
int main ()
{
int a,b,result;
printf("\n enterv two number ");
scanf("%d%d",&a,&b);
result=multiply(a,b);
printf("multiplication=%d",result);
getch();
}
