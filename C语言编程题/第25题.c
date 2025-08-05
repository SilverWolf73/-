/*25.（**）从键盘输入两个字符串a和b，要求不用库函数strcat
把串b的前5个字符连接到串a中；如果b的长度小于5，则把b的
所有元素都连接到a中，请编程实现。*/ 
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
