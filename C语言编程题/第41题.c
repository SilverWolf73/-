/*41.��***����д������һ���ַ�����ÿһ�����ʵĵ�һ����ĸת��Ϊ��д��
*/
#include <stdio.h>
#include <string.h>
void toUpper(char *);
main()
{
	char str[80];
	printf("Enter str:");
	gets(str);
	toUpper(str);
	puts(str);
}
void toUpper(char *p)
{
	int i=0,word=0;//word=0��ʾ���潫���µ��ʳ��֣�word=1��ʾ���治���µ��� 
	while(p[i]!='\0'){
		if(p[i]==' ') word=0;
		else if (word==0) {
			if (p[i]>='a'&&p[i]<='z') p[i]=p[i]-32;
			word=1;
		}
		i++;
	}
}
