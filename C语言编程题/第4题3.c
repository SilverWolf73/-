//计算1!+2!+...+10!的和
#include <stdio.h>
// 递归函数，计算n的阶乘
int fac(int n)
{
	if (n==1) return 1;
	return n*fac(n-1);
}
main()
{
	int s=0,p=1,i;
	// 循环计算1!到10!并累加到s
	for(i=1;i<=10;i++){
		s+=fac(i);
	}
	printf("s=%d\n",s);
} 
