#include <stdio.h>
#include <string.h> 
// 主函数，查找满足条件的三位数
main()
{
	int a,b,c,x,y;
	// 枚举百位a（1~9），十位b（0~9），个位c（1~9）
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=1;c<=9;c++){
				x=100*a+10*b+c;
				y=100*c+10*b+a;
		 // 判断x+y是否等于1333，若满足则输出abc
				if (x+y==1333)
			 		printf("%d%d%d\n",a,b,c);
	}
		
} 
