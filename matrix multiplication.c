#include<stdio.h>
	int main(){
		int arr1[2][2],arr2[2][2],i,j,k,sum;
		
		for(i=0;i<2;i++)
		{	
			for(j=0;j<2;j++)
			{ 
			printf("enter value of [%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]
			);
			}
			
		}
		
		for(i=0;i<2;i++)
		{	
			for(j=0;j<2;j++)
			{ 
			printf("enter value of [%d][%d] : ",i,j);
			scanf("%d",&arr2[i][j]);
			}
			
		}
		
		printf("First matrix :\n");
		for(i=0;i<2;i++)
		{	
			for(j=0;j<2;j++)
			{ 
			printf("%d \t",arr1[i][j]);
			}
			printf("\n");	
		}
		
		printf("second matrix\n");
		for(i=0;i<2;i++)
		{	
			for(j=0;j<2;j++)
			{ 
			printf(" %d \t ",arr2[i][j]);
			}
			printf("\n");
		}
		
		
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				for(k=0;k<2;k++)
				{
					sum= sum + arr1[i][k]*arr2[k][j];
				}
				printf("%d \t",sum);
				sum=0;
			}
			printf("\n");
		}
		return 0;
	}