/*
14. 输入5组两个人的身高，输出每组中的较高者。
*/
#include <stdio.h>
main()
{
	int a[5][2],i,j;
	printf("please Enter 5 groups data:\n");	// 提示输入数据
	// 输入5组数据，每组2个数
	for(i=0;i<5;i++)
	    for(j=0;j<2;j++)
	        scanf("%d",&a[i][j]);
	// 输出每组中较高的身高
	for(i=0;i<5;i++)	    
	   if(a[i][1]>a[i][0])printf("%d",a[i][1]);
	   else printf("%d",a[i][0]);
}
