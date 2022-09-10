//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
	int i=1,count=0,N;
	printf("Enter a number: ");
	scanf("%d",&N);
	
	while(i<=N){
		if(N%i==0)
		count++;
		i++;
	}
	count==2?printf("%d is a prime number",N):printf("%d is not a prime number",N);
return 0;
}

