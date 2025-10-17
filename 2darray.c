// 2D arrays are like matrices
/*
#include<stdio.h>
int main()
{
    int mat[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");   
    }
    
    return 0;
}
*/




/* Adding 2 matrices        
#include<stdio.h>
void matrixadd(int a,int b,int c,int d,int matA[a][b],int matB[a][b],int matC[a][d])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matC[i][j]=matA[i][j]+matB[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%3d",matC[i][j]);
        }
        printf("\n");
    }
    return;
}
int main()
{
    int a,b,c,d;
    printf("Enter row number of matrix A:");
    scanf("%d",&a);
    printf("Enter column number of matrix A:");
    scanf("%d",&b);

    int matrixA[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Matrix A[%d][%d]:",i+1,j+1);
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("Enter row number of matrix B:");
    scanf("%d",&c);
    printf("Enter column number of matrix B:");
    scanf("%d",&d);

    int matrixB[c][d];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("Matrix B[%d][%d]:",i+1,j+1);
            scanf("%d",&matrixB[i][j]);
        }
    }

    puts("Matrix A:");
    for (int i = 0; i < a; i++)
    {
    for (int j = 0; j < b; j++)
    {
        printf("%3d",matrixA[i][j]);
    }
    printf("\n");
    }
    puts("Matrix B:");
    for (int i = 0; i < c; i++)
    {
    for (int j = 0; j < d; j++)
    {
        printf("%3d",matrixB[i][j]);
    }
    printf("\n");
    }
    int matrixC[10][10];
    if(a==c && b==d){
     matrixC[a][d];
     puts("Matrix A + Matrix B:");
    matrixadd(a,b,c,d,matrixA,matrixB,matrixC);
    }
    else printf("This 2 matrix cannot be added.");
    return 0;
}
*/

/* Sum of a n x m matrix elements: 
#include<stdio.h>
int sumofelements(int r,int c, int matA[r][c])
{
    int sum=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum+=matA[i][j];
        }
    }
    
    return sum;
}
int main()
{
    int r,c;
    printf("Enter row number of matrix A:");
    scanf("%d",&r);
    printf("Enter column number of matrix A:");
    scanf("%d",&c);

    int matrixA[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Matrix A[%d][%d]:",i+1,j+1);
            scanf("%d",&matrixA[i][j]);
        }
    }
    int sum=sumofelements(r,c,matrixA);
    printf("Sum of the elements:%d",sum);
return 0;
}
*/

/* Maximum and minimum in a matrix:
#include<stdio.h>
#include<limits.h>
int maxelement(int r,int c,int mat[r][c])
{
    int max=INT_MIN;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(max<mat[i][j]) max=mat[i][j];
        }
    }
    return max;
}
int minelement(int r,int c,int mat[r][c])
{
    int min=INT_MAX;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(min>mat[i][j]) min=mat[i][j];
        }
    }
    return min;
}
int main()
{
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Matrix element[%d][%d]",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    puts("Matrix:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%5d",matrix[i][j]);
        } printf("\n");
    }
    int max=maxelement(r,c,matrix);
    int min=minelement(r,c,matrix);
    printf("Max element:%d\n",max);
    printf("Min element:%d",min);
    return 0;
}
*/

/* Sum of a sub matrix of user given co-ordinates:
#include<stdio.h>
int sum(int r,int c,int mat[r][c],int a,int b,int m,int d)
{
    int sum=0;
    for(int i=a;i<=m;i++)
    {
        for(int j=b;j<=d;j++)
        {
            sum+=mat[i][j];
        }
    }
    return sum;
}
int main()
{
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Matrix element[%d][%d]",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    puts("Matrix:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%5d",matrix[i][j]);
        } printf("\n");
    }
    int a,b,m,d;
    printf("Enter first Co-ordinate:(x1,y1)");
    scanf("%d%d",&a,&b);
    printf("Enter second Co-ordinate:(x2,y2)");
    scanf("%d%d",&m,&d);
    a--;b--;m--;d--;
    
    int s=sum(r,c,matrix,a,b,m,d);
    printf("Sum:%d",s);
    return 0;
}
*/

/* Row with the highest sum:
#include<stdio.h>
#include<limits.h>
int rowsum(int r,int c,int mat[r][c])
{
    int sum=0;
    for(int j=0;j<c;j++)
    {
     sum+=mat[r][j];
    }
    return sum;
}
int main()
{
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of column:");
    scanf("%d",&c);
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Matrix[%d][%d]",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    puts("Matrix:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%5d",matrix[i][j]);
        }printf("\n");
    }
int arr[r];
for(int k=0;k<r;k++)
   {
       arr[k]=rowsum(k,c,matrix);
   }
for(int k=0;k<r;k++)
   {
       printf("Sum of row %d:%d\n",k+1,arr[k]);
   }
  int max=INT_MIN, row;
  for(int i=0;i<r;i++)
  {
      if(max<arr[i]) row=i;
  }
printf("Row with the highest sum:%d",row+1);
    return 0;
}
*/

/* Transpose of a matrix:
#include<stdio.h>
int main()
{
    int matrixA[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Matrix[%d][%d]: ",i+1,j+1);
            scanf("%d",&matrixA[i][j]);
        }
    }
    puts("Matrix A:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d",matrixA[i][j]);
        }
        printf("\n");
    }
    
    int transpose[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[i][j]=matrixA[j][i];
        }
    }
    puts("Transpose Matrix:");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d",transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/

/* Transposing a square matrix without creating a new matrix:
#include<stdio.h>
void transpose(int r,int mat[r][r])
{
    for (int i = 0; i < r; i++)
    {
        for(int j=i+1;j<r;j++)
        {
         int temp=mat[i][j];
         mat[i][j]=mat[j][i];
         mat[j][i]=temp;
        }
    }
    
    return;
}
int main()
{   int n;
    printf("Number of row and column:");
    scanf("%d",&n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Matrix[%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    puts("Matrix A:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }
    transpose(n,matrix);
    puts("Transpose matrix:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/* rotating a matrix by 90 degree
#include<stdio.h>
void transpose(int r,int mat[r][r])
{
    for (int i = 0; i < r; i++)
    {
        for(int j=i+1;j<r;j++)
        {
         int temp=mat[i][j];
         mat[i][j]=mat[j][i];
         mat[j][i]=temp;
        }
    }
    
    return;
}
int main()
{   int n;
    printf("Number of row and column:");
    scanf("%d",&n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Matrix[%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    puts("Matrix A:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }
    transpose(n,matrix);

    for (int i = 0; i < n; i++)
    {
        int j=0,k=n-1;
        while(j<k){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[i][k];
            matrix[i][k]=temp;
            j++;
            k--;
        }
    }
    
    puts("90 degree rotated matrix::");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/* Multiplication of two matrices:
#include<stdio.h>
void matmultiply(int a,int b,int c,int d,int mat1[a][b],int mat2[c][d],int mat3[a][d])
{
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<d; j++)
		{
			mat3[i][j] = 0;
			for (int k = 0; k < b; k++)
			{
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}

	return ;
}
int main()
{
	int a,b,c,d;
	printf("Enter Row number for Matrix A:");
	scanf("%d",&a);
	printf("Enter column number for Matrix A:");
	scanf("%d",&b);
	printf("Enter Row number for Matrix B:");
	scanf("%d",&c);
	printf("Enter column number for Matrix B:");
	scanf("%d",&d);
	int matrixA[a][b];
	int matrixB[c][d];
	int matrixC[a][d];


	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			printf("Matrix A[%d][%d]:",i+1,j+1);
			scanf("%d",&matrixA[i][j]);
		}
	}

	for(int i=0; i<c; i++)
	{
		for(int j=0; j<d; j++)
		{
            printf("Matrix B[%d][%d]:",i+1,j+1);
			scanf("%d",&matrixB[i][j]);
		}
	}
	puts("Matrix A:");
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			printf("%4d",matrixA[i][j]);
		}
		printf("\n");
	}
	puts("Matrix B:");
	for(int i=0; i<c; i++)
	{
		for(int j=0; j<d; j++)
		{
			printf("%4d",matrixB[i][j]);
		}
		printf("\n");
	}

	if(b==c)
	{
	matmultiply(a,b,c,d,matrixA,matrixB,matrixC);
	puts("Matrix A x Matrix B:");
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<d; j++)
		{
			printf("%4d",matrixC[i][j]);
		}
		printf("\n");
	}
	}
	else printf("This two matrices cannot be multiplied!");
	return 0;
}
*/

/* Matrix Wave printing:
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("Enter number of column:");
    scanf("%d",&m);
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Matrix[%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    puts("Matrix normal printing:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }
    puts("Matrix wave printing:");
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
        for(int j=0;j<m;j++)
        {
            printf("%3d",matrix[i][j]);
        }
        }
        else{
        for(int j=m-1;j>=0;j--)
        {
            printf("%3d",matrix[i][j]);
        }
        }
        printf("\n");
    }
    return 0;
}
*/