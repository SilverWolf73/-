/*30.（**）请将n个整数按升序重新放在原数组中，操作时不得另开辟数组。
*/
#include <stdio.h>
main()
{
	int a[10]={1,3,5,7,9,2,4,6,8,10},n=10,i,j,t,k;
	for(i=0;i<n-1;i++){//选择法排序 
		k=i;
		for(j=i+1;j<n;j++) if(a[k]>a[j]) k=j;
		if(k!=i)//a[i]不是最小的，而a[k]才是 
		{t=a[i];a[i]=a[k];a[k]=t;}		 
	}
	for(i=0;i<n;i++) printf("%d ",a[i]); 
} 
