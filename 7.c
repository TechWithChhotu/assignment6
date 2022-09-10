//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
	int N,count=0;
	printf("Enter a number: ");
	scanf("%d",&N);
	for(;N;N/=10)
		count++;
		printf("total number of digits = %d",count);
return 0;
}

