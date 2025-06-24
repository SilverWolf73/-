#include<iostream>
#include<string>
int main(void){
    std::string 句子;
    int 单词数量(0);
    bool 是否在单词=false;
    std::cout<<"请输入一句话："<<std::endl;
    std::getline(std::cin,句子);
    for(char 句子:句子){
        if(句子!=' '){
            if(!(是否在单词)){
                单词数量++;
                是否在单词 = true;
            }
        }
        else{
            是否在单词=false;
        }
    }
    std::cout<<"一共有"<<单词数量<<"个"<<std::endl;
    return 0;
}