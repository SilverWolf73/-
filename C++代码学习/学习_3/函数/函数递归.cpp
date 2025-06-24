#include<iostream>
unsigned long fib(unsigned long n){
    if(n <= 1){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main(void){
    unsigned long n;
    unsigned long i;
    std::cout << "请输入一个非负整数: ";
    std::cin >> n;
    i=fib(n);
    std::cout << "斐波那契数列 " << n << " 是: " << i << std::endl;
    return 0;
}