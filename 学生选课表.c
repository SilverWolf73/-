#include<stdio.h>
#include<conio.h>
typedef struct data{
	int y , m,d;
} DATA;
typedef struct stud {
	char no[8], kc[10];
	int cj;
	DATA rq;
}STUD;
int main() {
	STUD s;
	printf("����ѧ�ţ�");
	gets_s(s.no);
	printf("����γ�����");
	gets_s(s.kc);
	printf("����ɼ���");
	scanf("%d", &s.cj);
	printf("����ѡ������:");
	scanf("%d%d%d", &s.rq.m, &s.rq.d, &s.rq.y);

	put("\n\n���:\n\n    ѧ��    �γ�    �ɼ�    ѡ������\n");
	printf("%8s %10s %8d\t", s.no, s.kc, s.cj);
	printf("%d-%d-%d\n", s.rq.y, s.rq.m, s.rq.d);

	return 0;
}
