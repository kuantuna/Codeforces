#include <iostream>

auto is_greater(const auto w_limak, const auto w_bob)
{
    return 3 * w_limak > 2 * w_bob;
}

int main()
{
    int w_limak, w_bob;
    auto years = 1;
    std::cin >> w_limak >> w_bob;
    while(!is_greater(w_limak, w_bob)){
        w_limak*=3, w_bob*=2;
        years++;
    }
    std::cout << years << std::endl;
}
