#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World \n";
    int time = 12;
    if (time > 19)
    {
        printf("Its Afternoon \n");
    }
    else if (time < 12)
    {
        printf("Good Morning \n");
    }
    else
    {
        printf("Good Afternoon \n");
    }
    return 0;
}