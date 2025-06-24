#include<iostream>
int main(void){
    int numbers[]={1,2,3,4,5};
    for(auto number:numbers){
        std::cout<<number<<std::endl;
    }
    return 0;
}