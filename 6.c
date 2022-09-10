//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
	int i,N,factorial=1;
	printf("Enter the number of N: ");
	scanf("%d",&N);
	do{
		factorial*=N;
		N--;
	}while(N);
	printf("factorial of %d = %d",i,factorial);
return 0;
}

