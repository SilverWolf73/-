/*32.��**����д����������һ������ɾ����������֮��ȵ�Ԫ�أ�
����ֵΪɾ����������Ԫ�صĸ�����
*/
#include <stdio.h>  
main(){
  int a[10]={8,2,3,4,5,6,7,8,8,10},n=10,x,m;
  int i;
  printf("Enter x:");
  scanf("%d",&x);
  m=getm(a,n,x);
  printf("%d\n",m); 
  for(i=0;i<m;i++) printf("%d ",a[i]);//Ϊ����֤���� 
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
