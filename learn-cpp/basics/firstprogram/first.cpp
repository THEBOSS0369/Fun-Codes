// simle input output programm
#include <iostream>

int main()
{
    std::cout << "Enter an integer: \n";
    int num{};
    std::cin >> num;
    std::cout << "Double of that no is: \n"
              << num * 2 << "\n";
    std::cout << "Triple of that no is : \n"
              << num * 3 << "\n";

    return 0;
}