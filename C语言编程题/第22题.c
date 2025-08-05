/*
22.（**）一个已经按从小到大排序的数组有9个元素，从终端输入第10个元素，
要求按原来排序的规律将它插入到数组中。
*/ 
#include <stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9},x,i,n=9;
	printf("please enter x:");
	scanf("%d",&x);
	for(i=n-1;i>=0;){//i初值为待判断的 有序元素之最后者的 下标 
		if(a[i]>x)
			a[i+1]=a[i--];
		else break; 
	}//最终，i为小于x的最后一个元素之下标 
	a[++i]=x;
	n++;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
