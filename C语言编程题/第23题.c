/*
23.��**�����д���������������Σ�10�У���
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
			/*��һ�е�ǰһ�����ͱ�����֮��*/
	
	for (i=0;i<M;i++)
		{for( j=0;j<=i;j++)
			printf("%4d",a[i][j]);
		 printf("\n"); 			
		}
}
