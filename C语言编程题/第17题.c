/*
17.（**）编写函数，求一个不超过5位数的十进制整数各位数值的和（如，12345各位数值的和为15)。
*/ 
#include <stdio.h>
int getSum(int);
main()
{
	int m,s;
	printf("please enter m:\n");
	scanf("%d",&m);
	s=getSum(m);	
	printf("sum=%d\n",s); 
}
int getSum(int m)
{
	int sum=0;
	while(m){
		sum+=m%10;
		m/=10;
	}
	return sum;
}

