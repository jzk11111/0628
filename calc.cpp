#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    
    cout << "团队协作计算器" << endl;
    cout << "==============" << endl;
    
    // 开发者A添加：加法
    cout << a << " + " << b << " = " << a + b << endl;
    
    // 开发者A添加：减法  
    cout << a << " - " << b << " = " << a - b << endl;
    
    // 开发者A添加：乘法
    cout << a << " * " << b << " = " << a * b << endl;
    
    // 开发者A添加：除法
    if (b != 0) {
        cout << a << " / " << b << " = " << a / b << endl;
    } else {
        cout << "除数不能为零" << endl;
    }
    
    return 0;
}

// 张三添加：欢迎函数
void welcome() {
    cout << "欢迎使用计算器！" << endl;
}

// 李四添加：帮助函数
void help() {
    cout << "帮助：输入两个数字进行计算" << endl;
}

exit
quit
cat >> calc.cpp << 'EOF'

// 张三添加：欢迎函数
void welcome() {
    cout << "欢迎使用计算器！" << endl;
}

// 张三添加：欢迎函数
void welcome() {
    cout << "欢迎使用计算器！" << endl;
}

// 张三添加：欢迎函数
void welcome() {
    cout << "欢迎使用计算器！" << endl;
}

// 张三添加：欢迎函数
void welcome() {
    cout << "欢迎使用计算器！" << endl;
}
