// Strings in Cpp
#include <iostream>
// always import string for use of string
#include <string>
using namespace std;

int main()
{
    // String Variable greeting is a string
    string greeting = "Hello!";
    cout << greeting << "\n";

    // String concatenation is + b/w two string
    string trainer = "Ash";
    string pokemon = "pikachu";
    // adding " " for the space between ash and pokemon
    string team = trainer + " " + pokemon;
    cout << team << "\n";

    // concateing using append
    string newteam = trainer.append(pokemon);
    cout << newteam << "\n";

    // string length
    string txt = "AEFEWAJFAEWJFWJJQFJWAl";
    cout << txt.length() << "\n"
         << txt.size() << "\n";

    return 0;
}