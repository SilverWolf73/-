/*34.��**�������ꡢ�¡��գ�����������Ǹ���ĵڼ��졣*/
#include <stdio.h>
main()
{
	int year,month,day,n=0,i;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("please enter year:");
	scanf("%d",&year);
	printf("please enter month:");
	scanf("%d",&month);
	printf("please enter day:");
	scanf("%d",&day);
	if (year%4==0 && year%100!=0||year%400==0) a[1]=29;
	for(i=0;i<month-1;i++)//����֮ǰ������ 
	   n+=a[i];
	n+=day;//���µ����� 
	printf("�����ǵ�%d��",n);
} 
