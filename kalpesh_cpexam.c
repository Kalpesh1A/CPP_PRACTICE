#include<stdio.h> 
#include<math.h>
int main()
{
	
						//1.swap of two numbers
/*	int fno,sno,tno;
	printf("\n Enter first number =");
	scanf("%d",&fno);
	printf("\n Enter second  number =");
	scanf("%d",&sno);
//	tno=fno;
//	fno=sno;
//	sno=tno;
	fno=fno+sno;
	sno=fno-sno;
	fno=fno-sno;
	printf("\n FNO=%d",fno);
	printf("\n SNO=%d",sno);
	*/
	
	
									//2.Even or Odd 
/*	int num;
	printf("\n Enter First Number =");
	scanf("%d",&num);
				//conditional(ternary)=? && modulus=if else
	// 
   	if(num%2==0)
	{
		printf("\n %d is even ",num);
	}
	else
	{
		printf("\n %d is odd",num);	
	}
	//num%2==0?printf("\n Even"):printf("\n ODD");
*/



									//3. LEAP YEAR.				
/*	int year;
	printf("\n Enter Year =");
	scanf("%d",&year);
	if(    (year%4==0 && year%100!=0)	|| year%400==0		)
	printf("\n LEAP YEAR ");
	else
	printf("\n NOT LEAP YEAR ");
*/
		
							//4.QUADRATIC SQUARE ROOT.
/*  int  	a,b,c,delta1;
	float 	delta2;
	float 	root1,root2;
	printf("\n Enter Values of a=");
	scanf("%d",&a);
	printf("\n Enter Values of b=");
	scanf("%d",&b);		
	printf("\n Enter Values of c=");
	scanf("%d",&c);
	delta1=(b*b)-4*a*c;
	delta2=sqrt(delta1);
	root1=(-b+delta2)/(2*a);
	root2=(-b-delta2)/(2*a);
	printf("\n ROOT_1=%.2f",root1);
	printf("\n ROT_2=%.2f",root2);
*/
							//5.GCD OF TWo Numberss
/*	int fno,sno,i=1,gcd;
	printf("\n Enter first number =");
	scanf("%d",&fno);
	printf("\n Enter second  number =");
	scanf("%d",&sno);
	while(i<=fno&&i<=sno)
	{
		if(fno%i==0&&sno%i==0)
		{
			gcd=i;
		}
		i=i+1;
	}
	printf("\n GCD = %d",gcd);
*/


	
//***************************************LOOPS*******************************************************************************************
							//1.Sum of digit 
/*	int num,sum=0,i=0;
	printf("\n Enter Number =");
	scanf("%d",&num);
	while(num>0)
	{	
		i=num%10;
		sum=sum+i;
		num=num/10;
	}	
	printf("\n  Sum=%d",sum);
	*/
							//2.count number of digits.
/*	int num,count=0;
	printf("\n Enter Number=");
	scanf("%d",&num);
	while(num>0)
	{
		num=num/10;
		count=count+1;
	}
	printf("\n COUNT = %d",count);
*/
							//3.revere & palendrom.
/*	int num,i,sum=0,temp;
	printf("\n Enter Number =");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		i=num%10;
		sum=(sum*10)+i;
		num=num/10;
	}
	printf("\n REVERSE =%d",sum);
	if(temp==sum)
	printf("\n palendrom");
	else 
	printf("\n Not palendrom");
*/
						//4.Armstrong.
/*	int i,sum=0,num,temp;
	printf("\n Enter Number =");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		i=num%10;
		sum=sum+(i*i*i);
		num=num/10;
	}
	if(temp==sum)
	printf("\n AREMSTRONG NUMBER ");
	else 
	printf("\n NOT ARMSTRONG");
*/
						//5.FACTORIAl.
/*	int num,y;
	printf("\nEnter Any Number TO Obtain Factorial=");
	scanf("%d",&num);
	y=num-1;
	while(y>0)
	{
		num=num*y;			
		y=y-1;
	}
	printf("\n FACTORIAL=%d",num);
*/
/*	//pattern1 ***
//		 	   ***
//		 	   ***

		int i,j;
		for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
			{
				printf("*");
			}
			printf("\n");
		}
*/
	//pattern2 *
//		 	   **
//		 	   ***

//		int i,j;
//		for(i=1;i<=500;i++)
//		{
//			for(j=1;j<=i;j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}

/*	//pattern3 ***
//		 	   **
//		 	   *

		int i,j;
		for(i=3;i>=1;--i)
		{
			for(j=1;j<=i;++j)	// ++i;i=3;i>=1;++j;
			{
				printf("*");
			}
			printf("\n");
		}
*/
	//pattern4 1
//		 	   1 2
//		 	   1 2 3

		int i,j;
		for(i=1;i<=100;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",j);
			}
			printf("\n");
		}

/*	//pattern5 1 2 3
//		 	   1 2
//		 	   1 

		int i,j;
		for(i=3;i>=1;--i)
		{
			for(j=1;j<=i;++j)
			{
				printf("%d",j);
			}
			printf("\n");
		}
*/
 		//pattern 6
 					//2 1
 					//3 2 1
 					//4 3 2 1
 					//5 4 3 2 1
 /*		int i,j;
 		for(i=1;i<=4;i++)
 		{
 			for(j=i;j>=1;j--)
 			{
 				printf("%d",j);
			 }
			 printf("\n");
		 }
 */
 					





	
//***********************	// .SWITCH-CASE******************************************************.
//	int fno,sno,ans;
//	char ch;
//	printf("\n");
//	printf("\n Press any one of following symbol to perform operation\n+\t-\t*\t/");
//	scanf(" %c",&ch);
//	switch(ch)
//	{
//			case '+' :
//							printf("\n Enter FNO=");
//							scanf("%d",&fno);
//							printf("\n Enter SNO=");
//							scanf("%d",&sno);
//							printf("\n ANS = %d",fno+sno);
//							break;
//			case '-' :
//							fno=0;
//							sno=0;
//							printf("\n Enter FNO=");
//							scanf("%d",&fno);
//							printf("\n Enter SNO=");
//							scanf("%d",&sno);
//							printf("\n ANS = %d",fno-sno);
//							break;
//			case '*' :
//							fno=0;
//							sno=0;
//							printf("\n Enter FNO=");
//							scanf("%d",&fno);
//							printf("\n Enter SNO=");
//							scanf("%d",&sno);
//							printf("\n ANS = %d",fno*sno);
//							break;
//			case '/' :
//							fno=0;
//							sno=0;
//							printf("\n Enter FNO=");
//							scanf("%d",&fno);
//							printf("\n Enter SNO=");
//							scanf("%d",&sno);
//							printf("\n ANS = %d",fno/sno);
//							break;
//			default :
//							printf("\n Enter Valid Symbol ");
//							break;
//	}



//**************************************************************************************************************************************
//**************************************ARRAY*******************************************************************************************
//**************************************************************************************************************************************

						//1.print array elements and their sum.
/*	int i,n,sum=0;
	printf("\n Enter Size of ARRay:");
	scanf("%d",&n);
	int arr[n];
	printf("\n Enter Array Element :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("\n");
	}
	printf("\n Your Entered array elements are :");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
		for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("\n SUM=%d",sum);
*/
					//2.Print Matrix .
/*	int i,j,r,c;
	printf("\n Enter Number of rows =");
	scanf("%d",&r);
	printf("\n Enter Number of columns =");
	scanf("%d",&c);
	int mat[r][c];
	printf("\n Enter Matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}		
	}
	printf("\n Your Entered Matrix is :\n\n");	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t %d",mat[i][j]);
		}
		printf("\n");		
	}
*/
							//3.Matrix Addition.
/*	int i,j,r,c;
	printf("\n For matrix Addition :");
	printf("\n Enter Number of Rows =");
	scanf("%d",&r);
	printf("\n Enter Number of Columns =");
	scanf("%d",&c);
	int mat1[100][100];
	printf("\n Enter Matrix - 1");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n Enter Matrix - 2");
	int mat2[100][100];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	int mat3[100][100];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
	printf("\n Matrix3=Matrix1+matrix2\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",mat3[i][j]);
		}
		printf("\n");
	}
*/



							//3.Matrix Multiplication.
//	int i,j,r,c,k;
//	printf("\n For matrix Addition :");
//	printf("\n Enter Number of Rows =");
//	scanf("%d",&r);
//	printf("\n Enter Number of Columns =");
//	scanf("%d",&c);
//	int mat1[100][100];
//	printf("\n Enter Matrix - 1");
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<c;j++)
//		{
//			scanf("%d",&mat1[i][j]);
//		}
//	}
//	printf("\n Enter Matrix - 2");
//	int mat2[100][100];
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<c;j++)
//		{
//			scanf("%d",&mat2[i][j]);
//		}
//	}
//	int mat3[r][c];
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<c;j++)
//		{
//			mat3[i][j]=0;
//			for(k=0;k<c;k++)
//			{
//					mat3[i][j]+=mat1[i][k]*mat2[k][j];
//			}
//			
//		}
//	}
//	
//	printf("\n Matrix3=Matrix1+matrix2\n");
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<c;j++)
//		{
//			printf("\t%d",mat3[i][j]);
//		}
//		printf("\n");
//	}


							//MAX of ARRAY ELEMENT.//min
// int max,n,i; 
//  printf("\nEnter number of elements=");
//  scanf("%d",&n);
//  int a[n];
//  for(i=0;i<n;i++)
//  {
//      scanf("%d",&a[i]);
//  }
// 
//  max=a[0];						//	0 1 2 3
//  								//	5 6 7 8 
//  for(i=1;i<=n;i++)
//  {
//      if(max<a[i])
//      {
//          max=a[i];
//      }
//  }
//    printf("\n Gratest=%d",max);

    //DELETION OF Array
/*	int i,j,x,n;
	printf("\nEnter Number of Elements =");
	scanf("%d",&n);
	int arr[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("\n Which Arrays index element you have to find =");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
    	if(arr[i]==x)
    	{
    		printf("\n Array Element Found at index = %d",i);
		}
	}
 */


//	*****************pointer addition(pt to pt p=add;*p=value;**pptr to ptr**pptr)*******************************************
/*	int fno,sno,sum;
	int *x,*y;
	printf("\n Enter Fno=");
	scanf("%d",&fno);
	printf("\n Enter Sno=");
	scanf("%d",&sno);
	x=&fno;
	y=&sno;
	sum=*x+*y;
	printf("\n SUM=%d",sum);
	*/
	//		
//************************************************************************************************************************
 	   
    
    
    
    
    
    
    
    
    
    
    




	
	
	
	return 0;
}
