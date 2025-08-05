/*40.（***）请编程，从键盘输入6名学生的5门成绩，分别统计每个学生的平均成绩。（在
主函数中输入，子函数求平均成绩）*/
/*一、问题分析

需要保存6名学生5门功课的成绩，需要设计一个6行5列大小的二维数组scores[6][5]
来存储30个成绩数据。保存6名学生的平均成绩，需要设计一个6列大小的一维数组来
avgs[6]存储平均成绩。
为使程序具有更好的通用性，使用宏定义定义学生人数M和课程门数N。

计算每个学生的平均成绩时，累加该行所有列的成绩数据，并除以列大小即为该学生的平均成绩。

*/

#include <stdio.h>
#define M 6			/* 学生人数 */
#define N 5			/* 课程门数 */
/* 输入row个学生col门课程的成绩 */
void input(double scores[][N], int row, int col);
/* 计算row个学生的平均成绩并保存在avgs数组中 */
void average(double scores[][N], int row, int col, double avgs[]);
/* 输出所有学生的平均成绩 */
void output(double avgs[], int size);
void main()
{
	double scores[M][N];
	double avgs[M];	
	input(scores, M, N);
	average(scores, M, N, avgs);
	output(avgs, M);
}
/* 输入row个学生col门课程的成绩 */
void input(double scores[][N], int row, int col)
{
	int i, j;
	printf("请输入%d个学生%d门课程的成绩，每个学生成绩在一行，以空格分隔成绩：\n", row, col);
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%lf", &scores[i][j]);
		}
	}
}
/* 计算row个学生的平均成绩并保存在avgs数组中 */
void average(double scores[][N], int row, int col, double avgs[])
{
	int i, j;
	for(i=0; i<row; i++)
	{
		avgs[i] = 0.0;
		for(j=0; j<col; j++)
		{
			avgs[i] += scores[i][j];
		}
		avgs[i] /= col;
	}
}
/* 输出所有学生的平均成绩 */
void output(double avgs[], int size)
{
	int i;
	printf("%6s%10s\n", "序号", "平均成绩");
	printf("----------------------------\n");
	for(i=0; i<size; i++)
	{
		printf("%6d%10.2lf\n", i+1, avgs[i]);
	}
}

