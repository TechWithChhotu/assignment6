//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
	int i,N,sum=0;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	i=N;
	while(i){
		sum+=(i*i*i);
		i--;
	}
	printf("Sum of cube of all number between 1 to %d = %d",N,sum);
	
return 0;
}

