/*30.（**）请将n个整数按升序重新放在原数组中，操作时不得另开辟数组。
*/
#include <stdio.h>
main()
{
	int a[10]={1,3,5,7,9,2,4,6,8,0},n=10,i,j,t,k;
	for(i=1;i<n;i++){//插入法排序 
	    t=a[i];
		for(j=i-1;j>=0;j--){//j指向有序序列的最后一个元素			
			if(t<a[j])
			{a[j+1]=a[j];}
			else break;
		}
		a[j+1]=t;				 
	}
	for(i=0;i<n;i++) printf("%d ",a[i]); 
} 
