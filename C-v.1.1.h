// c-v.1.1
#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::endl;

// 只提供 out（不换行）
template<typename... Args>
void out(Args... args) {
    (std::cout << ... << args);
}

// 输入
template<typename... Args>
void in(Args&... args) {
    (std::cin >> ... >> args);
}

// 读一行
inline std::string input(const std::string& prompt = "") {
    if (!prompt.empty()) out(prompt);
    std::string s;
    std::getline(std::cin, s);
    return s;
}