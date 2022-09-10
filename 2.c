// Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
	int j,N,sum=0;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	j=N;
	while(N){
		sum+=(N*2);
		N--;
	}
	printf("sum of all even no. betwee 1 to %d = %d",j,sum);
return 0;
}

