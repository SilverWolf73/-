/*
13. 求100以内的所有完全数，并输出其因子
完全数：一个数等于它所有真因子（不包括自身）的和，如6=1+2+3
输出格式示例：
6 its factors are 1,2,3
*/
#include <stdio.h>
main()
{
	int m,i,j,sum=0;
	// 枚举2~100的所有整数
	for(m=2;m<=100;m++){
		sum=0;
		// 计算m的所有真因子之和
		for(j=1;j<m;j++){
			if (m%j==0) sum+=j;
		}
		 // 判断是否为完全数
		if (m==sum){
			printf("%d its factors are 1",m);// 输出第一个因子1
			// 输出剩余因子
			for(i=2;i<m;i++){
				if (m%i==0) 
					printf(",%d",i);
			}
		printf("\n");
		}		
	}	
}
