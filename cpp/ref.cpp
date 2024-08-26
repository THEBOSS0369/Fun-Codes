#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;
    cout << "Hello World \n";
    cout << food << " Have a Goood Day!\n";
    cout << meal << " Have a Goood Day!\n";
    return 0;
}