
#include <stdio.h>
// 非递归函数，计算n的阶乘
int fac(int n)
{
	int i,p=1;
	 // 循环计算n的阶乘
	for(i=1;i<=n;i++)
	    p*=i;
	return p;	// 返回n的阶乘
}
main()
{
	int s=0,p=1,i;
	// 循环计算1!到10!并累加到s
	for(i=1;i<=10;i++){
		s+=fac(i);// 调用fac函数计算i的阶乘并累加
	}
	printf("s=%d\n",s);
} 
