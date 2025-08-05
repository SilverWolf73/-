/*
21.（**）从键盘输入两个整数，输出其最大公约数和最小公倍数。
*/ 
#include <stdio.h>
main()
{
	int m,n,r,p;
	printf("please enter two integers:\n");
	scanf("%d %d",&m,&n);
	/*if (m<n){
		p=m;m=n;n=p;
	}*/
	p=m*n;
	while(n){
		r=m%n;
		m=n;
		n=r;
	}
	printf("最大公约数：%d,最小公倍数：%d\n",m,p/m);
}
