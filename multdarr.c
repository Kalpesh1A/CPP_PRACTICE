#include<stdio.h>
int main()
{
	//int n,i;
	
//	int mat[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
//	// 10 20 30
//	// 40 50 60
//	// 70 80 90
//	printf("%d",mat[1][2]);
	
	int r,c,i,j;
	
	int mat1[100][100];
	
	printf("enter number of rows : ");
	scanf("%d",&r);
	printf("enter number of columns : ");
	scanf("%d",&c);
	// int mat1[r][c];
	printf("\n\t enter elements in matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
//	printf("\n\t you entered elements in matrix : \n");
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<c;j++)
//		{
//			printf("%d",mat[i][j]);
//		}
//		printf("\n");
//	}


	printf("\n\t enter elements in matrix : \n");
	int mat2[r][c];
	int mat3[r][c];
	//mat3=sum/ans;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	
	printf("addtion = : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",mat3[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
