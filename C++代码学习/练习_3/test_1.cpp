//编写一个函数用户输入两个数,通过函数交换
#include<iostream>
void 交换(int *num);
int main(void){
    using std::cin;
    using std::cout;
    int num[2];
    cout << "请输入两个整数: " << std::endl;
    for(int i = 0;i < 2; i++ ){
        cin >> num[i]; 
    }
    交换(num);
    cout << "交换后的两个整数是: " << num[0] << " " << num[1] << std::endl;
    return 0;
}

void 交换(int *num){
    int t;
    t = *(num+1);
    *(num+1) = *num;
    *num = t;
}