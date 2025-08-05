/*
21.（**）从键盘输入两个整数，输出其最大公约数和最小公倍数。
*/ 
#include <stdio.h>
main()
{
	int m,n,i,j,t;
	printf("please enter two integers:\n");
	scanf("%d %d",&m,&n);
	if (m<n){
		t=m;m=n;n=t;
	}
	for(i=m;i>=1;i--){
		if(n%i==0 && m%i==0) {
			printf("最大公约数为:%d\n",i);
			break;
		}
	}
	for(i=n;;i++){
		if(i%n==0 && i%m==0) {
			printf("最小公倍数为:%d\n",i);
			break;
		}
	}
}
