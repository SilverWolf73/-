//爬楼梯问题
// 题目描述：
// 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
// 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
#include<iostream>
int main(void){
    using std::cin;
    using std::cout;
    int n;
    cout << "请输入楼梯的阶数: ";
    cin >> n;
    if (n < 0) {
        cout << "楼梯阶数不能为负数。" << std::endl;
        return 1;
    }
    int a = 1, b = 2, c;
    if (n == 0) {
        cout << "只有一种方法: 不爬楼梯。" << std::endl;
        return 0;
    } else if (n == 1) {
        cout << "只有一种方法: 爬1阶。" << std::endl;
        return 0;
    } else if (n == 2) {
        cout << "有两种方法: 爬1阶两次或爬2阶一次。" << std::endl;
        return 0;
    }
    for (int i = 3; i <= n; i++) {
        c = a + b; // 当前阶数的方法数等于前两阶的方法数之和
        a = b;     // 更新前两阶的值
        b = c;
    }
    cout << "爬到第 " << n << " 阶的方法总数是: " << c << std::endl;
    return 0;
}