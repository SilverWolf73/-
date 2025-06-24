#include<iostream>
#include<vector>
int main(void){
    std::vector<int> 数量;
    int num;
    int 交换;
    while(std::cin>>num){
        数量.push_back(num);
    }
    for(int i = 数量.size();i>1;i--){
        for(int k=0;k<i - 1;k++){
            if(数量[k]>数量[k+1]){
                交换=数量[k];
                数量[k]=数量[k+1];
                数量[k+1]=交换;
            }
        }
    }
    for(int 数:数量){
        std::cout << 数 <<' ';
    }

    return 0;
}