#include <iostream>
using namespace std;

int main()
{
    int votingAge = 18;
    int myAge = 14;
    if (myAge >= 18)
    {
        cout << "You are Eligible for voting as your age is " << myAge << "\n";
    }
    else
    {
        cout << "You aren't eligible as your age is " << myAge << "while min age required is " << votingAge
             << "\n";
    }
    return 0;
}