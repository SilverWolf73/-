/*36.��***������strcpy������ʵ�������ַ����ĸ��ƣ��β���ָ���������*/
#include <stdio.h>
void strCopy(char *,char *);
main()
{
	char str1[80],str2[80]="xyz";
	strCopy(str1,str2);
	puts(str1);
} 
void strCopy(char *p,char *q)
{
	int i=0;
	while(*q!='\0'){
		*p++=*q++;
	}
	*p='\0';
	return ;	
}
