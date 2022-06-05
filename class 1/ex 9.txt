#include<stdio.h>
int main()
{
	int number,sum,a,b,c,d,d1,d2,d3,d4;

	printf("Enter a number of 4 digits : ");
	scanf("%d",&number);

	a=number/10;
	d4=number%10;
	b=a/10;
	d3=a%10;
	c=b/10;
	d2=b%10;
	d=c/10;
	d1=c%10;



    printf("First digit of the number : %d\n",d1);
	printf("last digit of the number : %d\n",d4);

	sum=d1+d4;

	printf("Sum of first and last digit is - %d",sum);

	return 0;


}
