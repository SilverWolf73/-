/*
16.用自定义函数，求一个一维数组的最大值、最小值及平均值。（主函数调用并输出）
*/ 
#include <stdio.h>
void make(int *,int);
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},n=10;
	extern int max,min;
	extern float aver;
	make(a,n);	
	printf("max=%d,min=%d,aver=%.2f\n",max,min,aver); 
}

int max,min;
float aver;
void make(int a[],int n)
{
	max=min=a[0];
	int sum=0,i;
	for(i=1;i<n;i++){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
		sum+=a[i];
	}
	aver=1.0*sum/n;
}

