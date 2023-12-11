#include<stdio.h>
int main () {
	int n,r;
	printf("enter any positive number :  ");
	scanf("%d",&n);
	int backup=n;
	int count=0;
	int a;
	
	do{
		n=n/10;
		count++;
	} while (n>0);
	
	n=backup;
	
	printf("%d \n",count);
	
	int sum=0;
	
	do{
		r=n%10;
		sum += r*r*r;
		n=n/10;
	} while(n>0);
	
	n=backup;
	if (n==sum){
		printf("%d number is ARMSTRONG Number ",n);
	}
	else {
		printf("%d is NOT armstrong number ",n);
	}
	return 0;
}