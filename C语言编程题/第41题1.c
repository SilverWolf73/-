/*编写函数将一个字符串中每一个单词的第一个字母转换为大写*/
 #include <stdio.h>
 void main()
 {
 	char s[81],*p,prior=' ';
 	printf("请输入内容：\n");
 	gets(s);
 	for (p=s;*p!='\0';p++)
	{//prior为' '标志着后面也许有新单词出现，如果不是则后面肯定不是新单词 
		if (prior==' '&&(*p>='a' && *p<='z'))
			*p-=32;//*p=*p+'A'-'a'
		prior = *p;
	} 
	printf("%s\n",s);
 }
