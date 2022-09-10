// Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
	int j,N,sum=0;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	j=N;
	do{
		sum+=(N*2-1);
		N--;
	}while(N);
	printf("sum of all odd no. between 1 to %d = %d",j,sum);
return 0;
}

