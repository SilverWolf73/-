/*
11. 用公式近似计算自然常数e的值
e = 1 + 1/1! + 1/2! + 1/3! + ...
*/

#include <stdio.h>

main()
{
	float i,n,p=1.0,t,e=1.0;
	printf("请输入n值\n");			 // 提示输入项数n
	scanf("%f",&n);					//输入n
	for(i=1;i<=n;i++){
		p=p*i;						// 计算i的阶乘
		t=1.0/p;					// 计算1/i!
		e=e+t;						// 累加到e
	}
	printf("e=%f\n",e);
}
