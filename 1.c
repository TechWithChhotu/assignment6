//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
	int i,N,sum=0;
	printf("ENter value of N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		sum+=i;
	}
	printf("sum of 1 to %d = %d",N,sum);
return 0;
}

