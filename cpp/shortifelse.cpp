#include <iostream>
#include <string>
using namespace std;

int main()
{
    int time = 20;
    string result = (time < 12) ? "Good Morning" : "Good Afternoon";
    cout << result;
    return 0;
}