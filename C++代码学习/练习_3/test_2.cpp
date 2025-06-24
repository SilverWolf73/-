#include<iostream>
#include<vector>
bool 判断(std::vector<char> str, int i);
int main(void){
    using std::cin;
    using std::cout;
    std::vector<char> str;
    int i=0;
    char ch;
    bool flag = true;
    while (cin.get(ch) && ch != '\n') {
        str.push_back(ch);
        i++;
    }

    flag = 判断(str, i);

    if(flag){
        cout << "是回文字符串" << std::endl;
    } else {
        cout << "不是回文字符串" << std::endl;
    }

    return 0;
}
bool 判断(std::vector<char> str, int i){
    int j;
    for (j = 0; j < i;j++){
        if(str[j] != str[i - j - 1]){
            return false;
        }
    }
    return true;
}
