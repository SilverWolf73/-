/*43.��***����������5�������������У�����5����Ϊ1��2��8��2��10��
���ӡ�����·���
1 2 8 2 10
2 8 2 10 1
8 2 10 1 2
2 10 1 2 8
10 1 2 8 2 
*/
#include <stdio.h>
#define N 5
main()
{
    int i,j,n=N;
	int a[N],t;	
	printf("����������Ԫ�أ�");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	} 
	for(i=1;i<=5;i++){
		for(j=0;j<5;j++) printf("%d ",a[j]);
		printf("\n");
		if(i==5) continue;
		t=a[n-1];
		for(j=n-1;j>0;j--) a[j]=a[j-1];
		a[0]=t;
	}
}

