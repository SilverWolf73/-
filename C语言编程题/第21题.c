/*
21.��**���Ӽ�������������������������Լ������С��������
*/ 
#include <stdio.h>
main()
{
	int m,n,r,p;
	printf("please enter two integers:\n");
	scanf("%d %d",&m,&n);
	/*if (m<n){
		p=m;m=n;n=p;
	}*/
	p=m*n;
	while(n){
		r=m%n;
		m=n;
		n=r;
	}
	printf("���Լ����%d,��С��������%d\n",m,p/m);
}
