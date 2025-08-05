/*28.（**）a数组中有8个元素，从第6个元素开始将数组后3个元素
移到数组开头。例如，a数组元素为2 6 9 8 5 3 7 4移动后数组变为：
3 7 4 2 6 9 8 5。*/
#include <stdio.h> 
#define N 8
main()
{
	int a[N]={2,6,8,9,5,3,7,4},i,j,t;
	printf("原数组为：\n");
	for(i=0;i<N;i++)
	    printf("%d  ",a[i]);
	for(j=1;j<=3;j++){
		t=a[N-1];
		for(i=N-2;i>=0;i--) a[i+1]=a[i];
		a[0]=t;		    
	}
	printf("\n移动后的数组为：\n");
	for(i=0;i<N;i++)
	    printf("%d  ",a[i]);
	
}
