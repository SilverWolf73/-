//倒序输出
#include <stdio.h>
#include <string.h> 
main()
{
	char s[80];
	int n,i;
	gets(s);
	n=strlen(s);
	for (i=n-1;i>=0;i--)
		printf("%c",s[i]);	
} 
