/*
16.���Զ��庯������һ��һά��������ֵ����Сֵ��ƽ��ֵ�������������ò������
*/ 
#include <stdio.h>
float getMax(float *,float);
float getMin(float *,float);
float getAver(float *,float);
main()
{
	float a[10]={1,2,3,4,5,6,7,8,9,10},n=10;
	float max,min,aver;
	max=getMax(a,n);
	min=getMin(a,n);
	aver=getAver(a,n);
	printf("max=%.1f,min=%.1f,aver=%.2f\n",max,min,aver); 
}
float getMax(float a[],float n)
{
	float max;
	int i;//������±����Ϊ���� 
	max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i]) max=a[i];
	}
	return max;
}
float getMin(float a[],float n)
{
	float min;
	int i;
	min=a[0];
	for(i=1;i<n;i++){
		if(min>a[i]) min=a[i];
	}
	return min;
}
float getAver(float a[],float n)
{
	float aver,sum=0;
	int i;
	for(i=1;i<n;i++){
		sum+=a[i];
	}
	return sum/n;
}
