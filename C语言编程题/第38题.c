/*38.（***）编制程序，在主函数中输入a、b、c三个数，在自定义函数中用指针法将a、b、c排序
（最大数放在变量a中，最小数放在变量c中），在主函数中输出。*/ 
#include <stdio.h>
void sort(int *,int *,int *);
main()
{
	int a,b,c;
	printf("Enter a b c:");
	scanf("%d %d %d",&a,&b,&c);
	sort(&a,&b,&c);
	printf("a=%d,b=%d,c=%d\n",a,b,c); 
}
void sort(int *a,int *b,int *c)
{
	int t;
	if (*a<*b){t=*a;*a=*b;*b=t;}
	if (*a<*c){t=*a;*a=*c;*c=t;}
	if (*b<*c){t=*b;*b=*c;*c=t;}
}
