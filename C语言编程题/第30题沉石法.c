/*30.（**）请将n个整数按升序重新放在原数组中，操作时不得另开辟数组。
*/
#include <stdio.h>
main()
{
	int a[10]={1,3,5,7,9,2,4,6,8,0},n=10,i,j,t,k;
	for(i=0;i<n-1;i++){//沉石法排序 
		for(j=1;j<n-i;j++){
			if(a[j-1]>a[j])
			{t=a[j-1];a[j-1]=a[j];a[j]=t;}
		}				 
	}
	for(i=0;i<n;i++) printf("%d ",a[i]); 
} 
