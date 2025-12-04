@echo off
echo 编译计算器程序...
g++ calc.cpp -o calc.exe
if %errorlevel% equ 0 (
    echo 编译成功！
    calc.exe
    pause
) else (
    echo 编译失败！
    pause
)
