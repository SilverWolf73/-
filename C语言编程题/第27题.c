/*27.（**）编写一程序，要求用户在键盘上输入一个整数，
并把每位数字转换为英文。例如，输入1024时，输出one 
zero two four。*/ 
#include <stdio.h>
main()
{
	long int n;
	int i=0,c[10]={0};
	printf("please Enter long int n:");
	scanf("%ld",&n);
	do{
		c[i++]=n%10;
	}while(n/=10);
	i--;
	while(i>=0){
		switch(c[i--])
		{
			case 0:printf("zero ");break;
			case 1:printf("one ");break;
			case 2:printf("two ");break;
			case 3:printf("three ");break;
			case 4:printf("four ");break;
			case 5:printf("five ");break;
			case 6:printf("six ");break;
			case 7:printf("seven ");break;
			case 8:printf("eight ");break;
			case 9:printf("nine ");break;
			default:printf("no");
		}
	}
}

