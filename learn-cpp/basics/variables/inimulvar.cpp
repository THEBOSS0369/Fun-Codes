// initializaing multiple variables
#include <iostream>

int main()
{
    int a = 5, b = 6;      // copy initialization
    int c(7), d(8);        // direct initialization
    int e{9}, f{10};       // direct brace initialization
    int g = {9}, h = {10}; // copy brace initialization
    int i{}, j{};          // value initialization
}