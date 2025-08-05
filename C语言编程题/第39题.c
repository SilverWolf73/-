/*39.（***）输入三个字符串，按由小到大顺序输出。（用字符指针实现）*/ 
#include <stdio.h>
#include <string.h>
void sort(char *,char *,char *);
main()
{
	char str1[80],str2[80],str3[80];
	gets(str1);gets(str2);gets(str3);
	sort(str1,str2,str3);
	puts(str1);puts(str2);puts(str3); 
}
void sort(char *str1,char *str2,char *str3)
{
	char str[80];
	if (strcmp(str1,str2)>0){
	    strcpy(str,str1);
		strcpy(str1,str2);
		strcpy(str2,str);
		}
	if (strcmp(str1,str3)>0){
	    strcpy(str,str1);
		strcpy(str1,str3);
		strcpy(str3,str);
		}
	if (strcmp(str2,str3)>0){
	    strcpy(str,str2);
		strcpy(str2,str3);
		strcpy(str3,str);
		}
}
