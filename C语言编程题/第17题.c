/*
17.��**����д��������һ��������5λ����ʮ����������λ��ֵ�ĺͣ��磬12345��λ��ֵ�ĺ�Ϊ15)��
*/ 
#include <stdio.h>
int getSum(int);
main()
{
	int m,s;
	printf("please enter m:\n");
	scanf("%d",&m);
	s=getSum(m);	
	printf("sum=%d\n",s); 
}
int getSum(int m)
{
	int sum=0;
	while(m){
		sum+=m%10;
		m/=10;
	}
	return sum;
}

