/*
20.（**）求3*3阶矩阵的主对角线和副对角线元素之和。
*/ 
#include <stdio.h>
main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,sum1=0,sum2=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (i==j) sum1+=a[i][j];
			if(i+j==2) sum2+=a[i][j]; 
		}
	}
	printf("sum1=%d,sum2=%d\n",sum1,sum2);
}
