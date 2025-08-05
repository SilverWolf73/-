/*31.（**）输入若干学生一门功课的成绩，统计各分数段的人数。凡不及格（60分以下）
都有一个计数器来统计，其它以10分作为一个分数段，100分作为一个分数段。总分100 
*/
#include <stdio.h>  
main(){
   int n;
   int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
   printf("请输入成绩,输入-1结束:\n");
   scanf("%d",&n);
   while(n!=-1)
   {
        switch(n/10){
        	case 10:a6+=1;break;
        	case 9:a5+=1;break;
        	case 8:a4+=1;break;
        	case 7:a3+=1;break;
        	case 6:a2+=1;break;
        	default:a1+=1;
        }
        scanf("%d",&n);
   }
   printf("1~59分数段的人回数答为:%d\n",a1);
   printf("60~69分数段的人数为:%d\n",a2);
   printf("70~79分数段的人数为:%d\n",a3);
   printf("80~89分数段的人数为:%d\n",a4);
   printf("90~99分数段的人数为:%d\n",a5);
   printf("100分的人数为:%d\n",a6);
}
