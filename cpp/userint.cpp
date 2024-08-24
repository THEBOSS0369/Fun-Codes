#include <iostream>
using namespace std;

int main()
{
    string pokemon;
    cout << "Enter Your Pokemon Name: \n";
    getline(cin, pokemon);
    cout << "Your Pokemon is: " << pokemon << "\n";
    return 0;
}