/*
19.（**）有一个字符串，含有n个字符。编写一个函数，
将此字符串中从第m个字符开始的全部字符复制成另一个字符串。
*/ 
#include <stdio.h>
#include <string.h>
void copym(char *,char *,int m);
main()
{
	char str1[80]="this is my first program.",str2[80]="";
	int m;
	printf("输入开始复制的位置m:");
	scanf("%d",&m);
	copym(str2,str1,m);
	puts(str2);	
}

void copym(char str2[80],char str1[80],int m)
{
	int n=strlen(str1),i,j;
	if (n<m) return;
	else {
		for(i=m-1,j=0;i<n;)
		    str2[j++]=str1[i++];
		str2[j]='\0';
	}
}

