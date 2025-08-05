
#include <stdio.h>

// 判断是否为水仙花数（各位立方和等于原数）
float add(float,float);
main()
{
	float a,b,c;

	// 输入两个浮点数
	scanf("%f %f",&a,&b);
	c=add(a,b);		// 调用add函数计算和
	printf("%f",c); // 输出结果
}

// add函数，返回两个浮点数的和
float add(float a,float b)
{
	return a + b;
}
