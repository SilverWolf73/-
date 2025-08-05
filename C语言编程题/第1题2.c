// 计算1/2,2/3,3/5,5/8,......17711/28657的和
#include <stdio.h>
main()
{ 
	int i,a=1,b=2,t;
	float sum=0;
	
	for (i=1;i<=20;i++)
	{
		sum+=1.0*a/b;
		t=a+b;
		a=b;
		b=t;
	}	
	printf("sum=%f\n",sum);	
} 
