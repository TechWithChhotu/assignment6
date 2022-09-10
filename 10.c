//Write a program to reverse a given number
#include<stdio.h>
int main()
{
	int N,reverse=0;
	printf("Enter a number: ");
	scanf("%d",&N);
	
	do{
		reverse*=10;
		reverse+=N%10;
		N/=10;
	}while(N);
	printf("after reverse entered number is %d",reverse);
return 0;
}

