/*40.��***�����̣��Ӽ�������6��ѧ����5�ųɼ����ֱ�ͳ��ÿ��ѧ����ƽ���ɼ�������
�����������룬�Ӻ�����ƽ���ɼ���*/
/*һ���������

��Ҫ����6��ѧ��5�Ź��εĳɼ�����Ҫ���һ��6��5�д�С�Ķ�ά����scores[6][5]
���洢30���ɼ����ݡ�����6��ѧ����ƽ���ɼ�����Ҫ���һ��6�д�С��һά������
avgs[6]�洢ƽ���ɼ���
Ϊʹ������и��õ�ͨ���ԣ�ʹ�ú궨�嶨��ѧ������M�Ϳγ�����N��

����ÿ��ѧ����ƽ���ɼ�ʱ���ۼӸ��������еĳɼ����ݣ��������д�С��Ϊ��ѧ����ƽ���ɼ���

*/

#include <stdio.h>
#define M 6			/* ѧ������ */
#define N 5			/* �γ����� */
/* ����row��ѧ��col�ſγ̵ĳɼ� */
void input(double scores[][N], int row, int col);
/* ����row��ѧ����ƽ���ɼ���������avgs������ */
void average(double scores[][N], int row, int col, double avgs[]);
/* �������ѧ����ƽ���ɼ� */
void output(double avgs[], int size);
void main()
{
	double scores[M][N];
	double avgs[M];	
	input(scores, M, N);
	average(scores, M, N, avgs);
	output(avgs, M);
}
/* ����row��ѧ��col�ſγ̵ĳɼ� */
void input(double scores[][N], int row, int col)
{
	int i, j;
	printf("������%d��ѧ��%d�ſγ̵ĳɼ���ÿ��ѧ���ɼ���һ�У��Կո�ָ��ɼ���\n", row, col);
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%lf", &scores[i][j]);
		}
	}
}
/* ����row��ѧ����ƽ���ɼ���������avgs������ */
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
/* �������ѧ����ƽ���ɼ� */
void output(double avgs[], int size)
{
	int i;
	printf("%6s%10s\n", "���", "ƽ���ɼ�");
	printf("----------------------------\n");
	for(i=0; i<size; i++)
	{
		printf("%6d%10.2lf\n", i+1, avgs[i]);
	}
}

