/*
15. 将一个m*n的矩阵转置后输出
*/
#include <stdio.h>
main()
{
	int a[5][2]={{1,2},
	              {3,4},
				  {5,6},
				  {7,8},
				  {9,10}};	// 原始5行2列矩阵
	int b[2][5];			// 用于存放转置后的2行5列矩阵
	int m=5,n=2,i,j;

	// 输出原始矩阵
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++)
	        printf("%d ",a[i][j]);
		printf("\n");	
	}

	// 转置矩阵：行列互换
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++)
	        b[i][j]=a[j][i];				
	}
	printf("------------------\n");

	// 输出转置后的矩阵
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++)
	        printf("%d ",b[i][j]);
		printf("\n");	
	}	   	   
}
