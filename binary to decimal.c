#include<stdio.h>
 int main () {
 	int n,j=0;
 	printf("enter the value of DECIMAL : ");
 	scanf("%d",&n);
 	int arr [20];
 	int i = 0;
 	do {
 		int rem = n % 2;
 		arr[ i ] = rem ;
 		n = n/2;
 		i++;
	 	} 
	 while ( n > 0) ;
	 
	 for(j=i-1;j>=0;j--)
	 {
	 	printf("%d",arr[j]);
	 }
	 return 0;
 }