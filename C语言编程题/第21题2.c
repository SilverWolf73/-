/*
21.��**���Ӽ�������������������������Լ������С��������
*/ 
#include <stdio.h>
main()
{
	int m,n,i,j,t;
	printf("please enter two integers:\n");
	scanf("%d %d",&m,&n);
	if (m<n){
		t=m;m=n;n=t;
	}
	for(i=m;i>=1;i--){
		if(n%i==0 && m%i==0) {
			printf("���Լ��Ϊ:%d\n",i);
			break;
		}
	}
	for(i=n;;i++){
		if(i%n==0 && i%m==0) {
			printf("��С������Ϊ:%d\n",i);
			break;
		}
	}
}
