#include<iostream>
#define Max 255
int main(void){
    std::string 句子;
    int 英文字母=0;
    std::cout<<"请输入一段话："<<std::endl;
    std::getline(std::cin,句子);
    for(char c:句子){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            英文字母+=1;
        }
    }
    std::cout<<"英文字母有"<<英文字母<<"个"<<std::endl;

    return 0;
}