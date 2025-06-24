#include<iostream>
using namespace std;
int main(void){
    int num1,num2;
    cout<<"请输入两个整数："<<endl;
    cin>>num1>>num2;
    
    (num1%2)==(num2%2)?(cout<<"平均值为："<<((num1+num2)/2)<<endl):((num1>num2)?(cout<<"最大值为："<<num1<<endl):(cout<<"最大值为："<<num2<<endl));

    return 0;
}