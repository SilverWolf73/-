/*35.��***����3��50֮����������֮�ͣ����Զ��庯���ж��Ƿ�Ϊ������*/
#include <stdio.h>
#include <math.h>
int isPrime(int);
main()
{
	int m,s=0;
	for(m=3;m<=50;m++){
		if (isPrime(m)) s+=m; 
	} 
	printf("s=%d\n",s);
} 
int isPrime(int m)
{
	int i,flag=1;
	for(i=2;i<=sqrt(m);i++)
	  if (m%i==0) {flag=0;break;}
	return flag;
}
