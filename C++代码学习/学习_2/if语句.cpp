#include<iostream>
using namespace std;
int main(void){
    int a;
    cout<<"请输入一个整数:"<<endl;
    cin>>a;
    if(a&1){
        cout<<"这是一个奇数。"<<endl;
    }
    else{
        cout<<"这是一个偶数。"<<endl;
    }
    return 0;
}
/*if可以有三种写法
1.if()
    代码块1;
2.if()
    代码块1;
 else
    代码块2;
3.if()
    代码块1;
 else if()
    代码块2;
 ...
    代码块n-1
 else
    代码块n;
*/
 