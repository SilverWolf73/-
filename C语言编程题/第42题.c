/*42.��***��һ������10��ѧ����ÿλѧ�������Ź��Ρ�
�������ƽ���ɼ����ܷ���ߺ���׵���λѧ�����пεĳɼ���
*/
#include <stdio.h>
main()
{
	int i,j,maxi=0,mini=0;//���ֵ����Сֵ���б� 
	float a[10][4]={0},ave,sum=0.0,zsum=0.0,max,min;
	for (j=0;j<4;j++)	sum += a[0][j]; 
	ave = sum/4; max=min=ave;//���ֵ����Сֵ����Ϊ��һ��ͬѧ��ֵ 
	
	for (i=1;i<10;i++)
	{
		sum=0.0;
		for (j=0;j<4;j++)	{sum+=a[i][j];}
		ave=sum/4.0;zsum+=sum; 		
		if (max<ave) {max=ave;maxi=i;}
		if (min>ave) {min=ave;mini=i;}
	}
	printf("ƽ���ɼ���%.2f\n",zsum/40);
	printf("��߷�ͬѧ�����ſγɼ���\n");
	for (j=0;j<4;j++) printf("%4d",a[maxi][j]); printf("\n");
	printf("��ͷ�ͬѧ�����ſγɼ���\n");
	for (j=0;j<4;j++) printf("%4d",a[mini][j]); printf("\n");	
}

