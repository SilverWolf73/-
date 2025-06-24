#include<iostream>
using namespace std;
int main(void){
    int 房间;
    cout<<"请输入房间(1||2||3)："<<endl;
    cin>>房间;
    switch(房间){
        case 1:
            cout<<"请去101。"<<endl;
            break;
        case 2:
            cout<<"请去201。"<<endl;
            break;
        default:
            cout<<"请去301。"<<endl;
    }
    return 0;
}