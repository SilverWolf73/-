/*
24.��**���Ӽ�����������50������������ֵ��0��4֮�䣨����0��4����
��-1��Ϊ���������־��ͳ��ÿ�������ĸ���������ʵ�֡�
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
	printf("����%d:%d��\n",i,r[i]);
}
