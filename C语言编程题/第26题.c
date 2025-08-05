/*26.（**）编写函数，在一个一维数组中查找指定的值，
若找到则返回该数的下标，否则返回-1。要求用指针变量
传递数组的首地址。*/ 
#include <stdio.h>
int getIndex(int *,int,int);
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},i,x,n=10,index;
	printf("Please Enter x:");
	scanf("%d",&x);	
	index=getIndex(a,n,x);
	printf("%d",index);
}
int getIndex(int *p,int n,int x)
{
	int i;
	for(i=0;i<n;i++,p++){
		if(*p==x) return i;		
	}
	return -1;
}
