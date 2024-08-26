#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string *ptr = &food;
    cout << "Hello World \n";
    cout << ptr << " \n";
    cout << "Have a Goood Day!\n";
    return 0;
}