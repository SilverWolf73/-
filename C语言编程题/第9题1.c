#include <stdio.h>
main()
{
	int s=0,a,i,n,k;
	// 输入a和n，a为数字，n为项数
	scanf("%d%d",&a,&n);
	k=a;	// k用于保存每一项的值
	for(i=1;i<=n;i++){
		s+=k;		 	 	// 累加当前项到总和
		k=k*10+a;			// 生成下一项（如a=2时，依次为2, 22, 222, ...）
	}
	printf("s=%d\n",s);
}
