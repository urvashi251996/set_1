#include<stdio.h>
void main()
{
int num;
scanf("%d",&num);
if(num>=1 && num<=100000)
{
if(num%2==0)
	printf("Entered number is even");
else
	printf("Entered number is odd");
}
else
	printf("Invalid");

}