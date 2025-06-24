//内联函数
#include<iostream>
inline float m(float a, float b);
int main(void){
    int a=2, b=5, c=9;
    float x=3.5, y=-5.7;
    float res =m(a,b);
    std::cout << res << std::endl;
    return 0;
}
inline float m(float a, float b){
    return a*b;
}
