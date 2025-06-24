#include<iostream>
float multiply(float, float);
int main(void){
    float a,b;
    double c;
    std::cout<<"请输入两个小数："<<std::endl;
    std::cin >> a >> b; 
    c = multiply(a,b);
    std::cout << "a*b=" << c << std::endl;
    return 0;
}
float multiply(float a,float b/*形参*/){
    float c = a * b;
    return c;
}
//int inc(int v)按值传递
//void inc(int& a)按引用传递