#include <iostream>

int main()
{
    // direct initialization
    int a;   // bad
    int g{}; // good

    // copy initialization
    int b = 0;
    int x = {0};

    // value initialization
    int c(5);
    int e{5};

    std::cout << "Hello";
    return 0;
}
