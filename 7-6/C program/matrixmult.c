//matrix multiplication

#include<stdio.h>

int main(){
	int a[50][50],b[50][50],product[50][50];
	int arows,acolumns,brows,bcolumns;
	int i,j,k;
	int sum=0;
	
	printf("Enter the rows and columns for the matrix a:");
	scanf("%d %d",&arows,&acolumns);
	
	printf("Enter the elements of the matrix a:\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acolumns;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("Enter the rows and columns for the matrix b:");
	scanf("%d %d",&brows,&bcolumns);
	//Condition for equal rows and equal columns
	if(brows!=acolumns)
	{
		printf("Sorry! We cannot multiply the matrix a and matrix b due to dimentions mismmatch");
		
	}
	else
	{
		printf("Enter the elements of the matrix b:\n");
		for(i=0;i<brows;i++)
		{
			for(j=0;j<bcolumns;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
	}
	printf("\n");
	//Multiplication
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			for(k=0;k<brows;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			product[i][j]=sum;
			sum=0;
		}
	}
	printf("Resultant matrix\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			printf("%d ",product[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
