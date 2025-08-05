// 主函数，计算1!+2!+...+10!的和
#include <stdio.h>
main()
{
	int s=0,p=1,i;
	// 循环计算每一项阶乘并累加到s
	for(i=1;i<=10;i++){
		p*=i;	// 计算i的阶乘
		s+=p;	// 累加到总和s
	}
	printf("s=%d\n",s);
} 
