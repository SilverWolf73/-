/*38.��***�����Ƴ�����������������a��b��c�����������Զ��庯������ָ�뷨��a��b��c����
����������ڱ���a�У���С�����ڱ���c�У������������������*/ 
#include <stdio.h>
void sort(int *,int *,int *);
main()
{
	int a,b,c;
	printf("Enter a b c:");
	scanf("%d %d %d",&a,&b,&c);
	sort(&a,&b,&c);
	printf("a=%d,b=%d,c=%d\n",a,b,c); 
}
void sort(int *a,int *b,int *c)
{
	int t;
	if (*a<*b){t=*a;*a=*b;*b=t;}
	if (*a<*c){t=*a;*a=*c;*c=t;}
	if (*b<*c){t=*b;*b=*c;*c=t;}
}
