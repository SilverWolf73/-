#include<iostream>
using namespace std;
int main(void){
    int result(0);
    int i;
    for(i=1;i<=10;i++){
        result+=i;
    }
    cout<<"result="<<result<<endl;
    return 0;
}