/*33.(**)有10个数已按由小到大的顺序存放在一个整型数组中，
从键盘上输入一个数，找出该数是数组中的第几个元素，如果该数不在
数组中，则打印出“无此数”。*/
#include <stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},n=10,i,x,index=-1;
	printf("Enter x:");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if (x==a[i]){index=i;break;}
	}
	if(index==-1) printf("无此数");//也可以if(i>=n) 
	else printf("此数是第%d个元素",index+1);
} 
