/*����strcpy������ʵ�������ַ����ĸ��ƣ��β���ָ�������*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
	void copy_string(char *from,char *to);
	char *a="i am a teacher!",b[]="";
	copy_string(a,b);
	puts(b);
} 
void copy_string(char *from,char *to)
{
	int i=0;
	while(from[i]!='\0')
	{
		to[i]=from[i];i++;
	}
	to[i]='\0';	
}
