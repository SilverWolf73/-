/*
23.（**）请编写程序，输出杨辉三角形（10行）。
*/ 
#define M 10
#define N 10
main()
{
	int a[M][N],i,j;
	for (i=0;i<M;i++)
		for( j=0;j<N;j++)
			if (j==0 || j==i) a[i][j]=1;
			else a[i][j] = a[i-1][j-1]+a[i-1][j];
			/*上一行的前一列数和本列数之和*/
	
	for (i=0;i<M;i++)
		{for( j=0;j<=i;j++)
			printf("%4d",a[i][j]);
		 printf("\n"); 			
		}
}
