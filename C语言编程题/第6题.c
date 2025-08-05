#include <stdio.h>

// 主函数，找出所有三位的水仙花数
/*水仙花数水仙花数（Narcissistic number）也被称为超完全数字不变数
（pluperfect digital invariant, PPDI）、自恋数、自幂数、阿姆斯
壮数或阿姆斯特朗数（Armstrong number），水仙花数是指一个 3 位数，
它的每个数位上的数字的 3次幂之和等于它本身。
例如：1^3 + 5^3+ 3^3 = 153。*/
main()
{
	int i,j,k,a;
	 // 枚举百位i（1~9），十位j（0~9），个位k（0~9）
	for(i=1;i<=9;i++){
		for(j=0;j<=9;j++){
			for(k=0;k<=9;k++){
				// 计算各位数字立方和
				a=i*i*i+j*j*j+k*k*k;
				// 判断是否为水仙花数（各位立方和等于原数）
				if (100*i+10*j+k==a) printf("%4d",a);
			}
		}
	}
}
