/*
24.（**）从键盘输入少于50个的整数，其值在0和4之间（包括0和4），
用-1作为输入结束标志，统计每个整数的个数，请编程实现。
*/ 
#include <stdio.h>
main()
{
	int a[50],r[5]={0},i=0,j,x;
	int n=0;
	printf("enter numbers:");
	scanf("%d",&x);
	while(x!=-1){
		a[i++]=x;
		scanf("%d",&x);
	}
	n=i-1;
	for(i=0;i<=n;i++)
	  r[a[i]]++;
	for(i=0;i<5;i++)
	printf("数字%d:%d次\n",i,r[i]);
}
