#include<iostream>
using namespace std;
int main(void){
    int 秒1,秒2;
    int 小时,分钟;
    cout<<"请输入几秒："<<endl;

    cin>>秒1;
    秒2=秒1%60;
    分钟=秒1/60;
    小时=分钟/60;
    分钟%=60;
    
    cout<<小时<<"小时"<<分钟<<"分钟"<<秒2<<"秒"<<endl;
    return 0;
}