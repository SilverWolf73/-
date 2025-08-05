/*37.（***）从键盘输入10个数，将其中最小的数与第一个对换，
最大的数与最后一个对换，实现从小到大的排序。（用指针实现）*/ 
#include <stdio.h>
main()
{
	int a[10]={1,3,5,7,9,2,4,6,8,0},n=10,i,j;
	int *min,*max,*p,temp; 
	//for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0,j=n-1-i;i<j;i++,j--){
		min=&a[i];//找最小的与a[i]交换 	
		for(p=&a[i]+1;p<a+n-i;p++){
		    if (*min>*p) min=p;
		} 		
		temp=a[i];a[i]=*min;*min=temp;
		max=&a[i];//找最大的与a[n-1-i]交换 			
		for(p=&a[i]+1;p<a+n-i;p++){
			if (*max<*p) max=p;	
		} 		
		temp=a[n-1-i];a[n-1-i]=*max;*max=temp;
	}
	for(i=0;i<n;i++) printf("%d ",a[i]); 
}
