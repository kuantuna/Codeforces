#include <iostream>

int main() {
    int first, money, count;
    std::cin >> first >> money >> count;
    auto sum = (first*count + first)*count/2;
    if(money>=sum)
        std::cout << 0 << std::endl;
    else
        std::cout << sum-money << std::endl;
}
