//质数判断器
// 质数：只能被1和它本身整除的数
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define Max 1000

void 区间模式(int *, int ,int);
void 基础判断(void);
int 界面(void);

int main(void){
    int num, i, start, end, 选择;
    int numbers[Max]={0};    

    选择 = 界面();
    if(选择 == 1){
        printf("请输入正整数:\n");
        基础判断();
    }
    else if(选择 == 2){
        printf("请输入开始值和结束值:\n");
        if((scanf("%d%d",&start ,&end )) != 2 && (start <= 0) && (end <= start) && (end <= 0)){
            printf("输入错误");
            return -1;
        }
        区间模式(numbers, start, end);
    }
    else {
        printf("正常退出\n");
        return 0;
    }
}

int 界面(void){
    int 选择, i;
    do{
        printf("高级质数判断工具​​");
        printf("\n———————————————\n");
        printf("1.基础判断。\n");
        printf("2.区间模式。\n"
               "0.退出\n");
        printf("请选择(0\\1\\2):\n");
        i = (scanf("%d",&选择));
    }while(((选择 < 0 ) || (选择 > 3)) || (i != 1));
    return 选择;
}

void 基础判断(void){
    _Bool p = true;
    int num, i;
    if((scanf("%d",&num)) != 1 && num <= 0){
        printf("请重新输入!!!\n");
    }
    for ( i = 2;i < num;i++){
            if((num % i) == 0){
                p = false;
                break;
            }
        }
    if(p){
            printf("%d是质数.\n",num);
    }
    else{
            printf("%d是合数,最小因数为%d\n", num ,i);
    }
}

void 区间模式(int *p, int start, int end){
    int i, k, sum = 0;
    for(i = start; i <= end; i++){
        for(k = 2; k < i- 1; k++){
            if(i % k == 0)
                break;
        }
        if( i % k == 0){
            continue;
        }
        *(p + sum) = i;
        sum += 1;
    }
    printf("[");
    for( i = 0; i < sum; i++){
        printf("%d ",*(p + i));
    }
    printf("]");
    printf("sum = %d",i);
}
