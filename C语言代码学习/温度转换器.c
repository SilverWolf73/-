//华氏度转摄氏度转换器
#include<stdio.h>
int 界面(void);
int main(void){
    float 华氏度;
    float 摄氏度;
    int 判断;
    判断 = 界面();
    
    if(判断==1){
        printf("请输入摄氏度:\n");
        scanf("%f",&摄氏度);
        华氏度 =(摄氏度 - 32) * 5 / 9;
        printf("摄氏度%.2f为%.2f华氏度\n", 摄氏度, 华氏度);  
    }
    if (判断==2)
    {
        printf("请输入华氏度:\n");
        scanf("%f",&华氏度);
        摄氏度 = (华氏度 * 9 / 5) + 32;
        printf("华氏度%.2f为%.2f摄氏度\n", 华氏度, 摄氏度);  
    }
    printf("程序已终止，感谢使用！\n");
    
    return 0;
}
int 界面(void){
    int 判断;
    printf("温度转换器\n");
    printf("-----------------------\n");
    printf("1. 摄氏 ——> 华氏\n");
    printf("2. 华氏 ——> 摄氏\n");
    printf("0. 退出程序\n");
    printf("请选择操作 (0\\1\\2) :\n");
    scanf("%d",&判断);
    return 判断;
}
