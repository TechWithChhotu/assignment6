// Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
	int i,N,sum=0;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	for(i=N;i;i--){
		sum+=(i*i);
	}
	printf("Sum of square all number between 1 to %d = %d",N,sum);
return 0;
}

