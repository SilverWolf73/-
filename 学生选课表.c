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
	printf("输入学号：");
	gets_s(s.no);
	printf("输入课程名：");
	gets_s(s.kc);
	printf("输入成绩：");
	scanf("%d", &s.cj);
	printf("输入选课日期:");
	scanf("%d%d%d", &s.rq.m, &s.rq.d, &s.rq.y);

	put("\n\n输出:\n\n    学号    课程    成绩    选课日期\n");
	printf("%8s %10s %8d\t", s.no, s.kc, s.cj);
	printf("%d-%d-%d\n", s.rq.y, s.rq.m, s.rq.d);

	return 0;
}
