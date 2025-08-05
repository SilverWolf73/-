
#include <stdio.h>
#define N 10 
// 选择排序函数，对数组a进行升序排序
int sort(int a[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k=i;// 记录当前最小值下标
		for(j=i+1;j<n;j++)
			if(a[k]>a[j]) k=j;// 找到更小的元素
		if(k!=i){
			t=a[i];a[i]=a[k];a[k]=t;// 交换
		}
	}
}
main()
{
	int a[N],i;
	// 输入10个整数
	for(i=0;i<N;i++)
	    scanf("%d",&a[i]);
	sort(a,N); // 对数组进行升序排序

	// 从大到小输出所有偶数
	for(i=N-1;i>=0;i--)
	    if(a[i]%2==0) printf("%4d",a[i]);
	printf("\n");

	// 从小到大输出所有奇数
	for(i=0;i<=N-1;i++)
	    if(a[i]%2) printf("%4d",a[i]);
} 
