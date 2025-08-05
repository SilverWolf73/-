/*32.（**）编写函数，给定一个数，删除数组中与之相等的元素，
返回值为删除后数组中元素的个数。
*/
#include <stdio.h>  
main(){
  int a[10]={8,2,3,4,5,6,7,8,8,10},n=10,x,m;
  int i;
  printf("Enter x:");
  scanf("%d",&x);
  m=getm(a,n,x);
  printf("%d\n",m); 
  for(i=0;i<m;i++) printf("%d ",a[i]);//为了验证而已 
}
int getm(int a[],int n,int x)
{
	int i,j=0;
	for (i=0;i<n;i++)
	{
		if(a[i]!=x){a[j++]=a[i];}
	}
	return j;
}
