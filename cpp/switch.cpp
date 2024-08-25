#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World \n";
    int pokemon = 10;
    switch (pokemon)
    {
    case 1:
        cout << "Pikachu \n";
        break;
    case 2:
        cout << "Charizard \n";
        break;
    case 3:
        cout << "Squirtle \n";
        break;
    case 4:
        cout << "Bulbasaur \n";
        break;
    default:
        cout << "Solgaeleo \n";
    }
    return 0;
}