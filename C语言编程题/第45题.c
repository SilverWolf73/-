/*45.(**)�Ա�����ҳ�1��99֮���ȫ��ͬ������ͬ����������һ������
  ��������ƽ�������ұߡ��� 5��25�ұߵ�����25��625�ұߵ�����
  5��25����ͬ������ 

#include <stdio.h>
main()
{
	int i;
	for (i=1;i<=99;i++)
	{
		if (i*i%10 == i || i*i % 100 == i)
			printf("%5d",i);
	}
} */
#include <stdio.h> 
main()
{
	int i,m,pf,flag;
	for(i=1;i<=100;i++){
		flag=1;	pf=i*i; m=i;
		while(m){
			if(m%10!=pf%10){flag=0;break;}
			m/=10;pf/=10;
		}
		if(flag) printf("%5d",i);
	}	
}


