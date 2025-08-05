/*41.（***）编写函数将一个字符串中每一个单词的第一个字母转换为大写。
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
	int i=0,word=0;//word=0表示后面将有新单词出现，word=1表示下面不是新单词 
	while(p[i]!='\0'){
		if(p[i]==' ') word=0;
		else if (word==0) {
			if (p[i]>='a'&&p[i]<='z') p[i]=p[i]-32;
			word=1;
		}
		i++;
	}
}
