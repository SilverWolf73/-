/*编写函数将一个字符串中每一个单词的第一个字母转换为大写*/
 #include <stdio.h>
 main()
 {
 	char ch[50]="he is my friend";
	int i,word=0;
	for (i=0;ch[i]!='\0';i++)
		if (ch[i]==' ') word=0;
		else if (word==0) {
			ch[i]=capslock(ch[i]);word=1;
		}
	printf("%s",ch);
 }
 capslock(char a)
 {  if(a>='a'&&a<='z') 	a=a-32;
 	return (a);
 }
