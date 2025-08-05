/*30.（**）请将n个整数按升序重新放在原数组中，操作时不得另开辟数组。
*/
#include <stdio.h>
main()
{
	int a[10]={1,3,5,7,9,2,4,6,8,10},n=10,i,j,t,k;
	for(i=0;i<n;i++){//冒泡法排序 i<n-1也行 
		for(j=n-1;j>i;j--){
			if(a[j]<a[j-1])
			{t=a[j];a[j]=a[j-1];a[j-1]=t;}
		}				 
	}
	for(i=0;i<n;i++) printf("%d ",a[i]); 
} 
