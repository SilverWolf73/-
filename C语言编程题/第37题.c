/*37.��***���Ӽ�������10��������������С�������һ���Ի���
�����������һ���Ի���ʵ�ִ�С��������򡣣���ָ��ʵ�֣�*/ 
#include <stdio.h>
main()
{
	int a[10]={1,3,5,7,9,2,4,6,8,0},n=10,i,j;
	int *min,*max,*p,temp; 
	//for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0,j=n-1-i;i<j;i++,j--){
		min=&a[i];//����С����a[i]���� 	
		for(p=&a[i]+1;p<a+n-i;p++){
		    if (*min>*p) min=p;
		} 		
		temp=a[i];a[i]=*min;*min=temp;
		max=&a[i];//��������a[n-1-i]���� 			
		for(p=&a[i]+1;p<a+n-i;p++){
			if (*max<*p) max=p;	
		} 		
		temp=a[n-1-i];a[n-1-i]=*max;*max=temp;
	}
	for(i=0;i<n;i++) printf("%d ",a[i]); 
}
