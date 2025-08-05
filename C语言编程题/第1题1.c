// 计算1/2,2/3,3/5,5/8,...17711/10946的和
#include <stdio.h>
main()
{
	int i,a[20],b[20];
	float sum=0;
	a[0]=2;a[1]=3;
	b[0]=1;b[1]=2;
	for (i=2;i<20;i++) 		// i用于控制斐波那契数列的下标，从2到19
	{
		a[i]=a[i-2]+a[i-1];
		b[i]=b[i-2]+b[i-1];
	}
	for (i=0;i<20;i++)		// i用于遍历每一项，计算分数和
	{
		sum += (float)b[i]/a[i];
	}
	printf("sum=%f\n",sum);	
} 
