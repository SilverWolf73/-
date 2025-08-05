/*42.（***）一个班有10名学生，每位学生有四门功课。
请编程输出平均成绩、总分最高和最底的两位学生所有课的成绩。
*/
#include <stdio.h>
main()
{
	int i,j,maxi=0,mini=0;//最大值和最小值的行标 
	float a[10][4]={0},ave,sum=0.0,zsum=0.0,max,min;
	for (j=0;j<4;j++)	sum += a[0][j]; 
	ave = sum/4; max=min=ave;//最大值和最小值均设为第一个同学的值 
	
	for (i=1;i<10;i++)
	{
		sum=0.0;
		for (j=0;j<4;j++)	{sum+=a[i][j];}
		ave=sum/4.0;zsum+=sum; 		
		if (max<ave) {max=ave;maxi=i;}
		if (min>ave) {min=ave;mini=i;}
	}
	printf("平均成绩：%.2f\n",zsum/40);
	printf("最高分同学的四门课成绩：\n");
	for (j=0;j<4;j++) printf("%4d",a[maxi][j]); printf("\n");
	printf("最低分同学的四门课成绩：\n");
	for (j=0;j<4;j++) printf("%4d",a[mini][j]); printf("\n");	
}

