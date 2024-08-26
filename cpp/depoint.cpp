// dereference pointer
#include <iostream>
using namespace std;

int main()
{
    string pokemon = "Pikachu";
    string *ptr = &pokemon;
    cout << "Hello World \n";
    cout << "Have a Goood Day!\n";
    cout << ptr << "\n";
    cout << *ptr << "\n";

    return 0;
}