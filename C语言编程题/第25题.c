/*25.��**���Ӽ������������ַ���a��b��Ҫ���ÿ⺯��strcat
�Ѵ�b��ǰ5���ַ����ӵ���a�У����b�ĳ���С��5�����b��
����Ԫ�ض����ӵ�a�У�����ʵ�֡�*/ 
#include <stdio.h>
#include <string.h>
main()
{
	char a[50],b[10],*p,*q;
	int n,i=1;
	printf("please enter string a:\n");
	gets(a);
	printf("please enter string b:\n");
	scanf("%s",b);
	n=strlen(a);
	p=a+n;
	q=b;
	while(*q!='\0' && i++<=5){
		*p++=*q++;
	}
	*p='\0'; 
	puts(a);
}
