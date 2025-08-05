#include <stdio.h>
main()
{
	int i,j,k,a;
	// 枚举所有三位数a（101~999）
	for(a=101;a<=999;a++){
		i=a/100;		// 百位
		j=a/10%10;		// 十位
		k=a%10;		 	// 个位
		// 判断是否为水仙花数（各位立方和等于原数）
		if (a==i*i*i+j*j*j+k*k*k) 
			printf("%4d",a);// 输出水仙花数
	}
}
