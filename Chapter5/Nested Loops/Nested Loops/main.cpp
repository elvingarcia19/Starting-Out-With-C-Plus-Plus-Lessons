//Nested loops
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << fixed << right;
    cout.fill('0');
    
for (int hours = 0; hours < 24; hours++)
{
        for (int minutes = 0; minutes < 60; minutes++)
    {
        
        for (int seconds = 0; seconds < 60; seconds++)
        {
            cout << setw(2) << hours << ":";
            cout << setw(2) << minutes << ":";
            cout << setw(2) << seconds << endl;
        }
    }
}
    return 0;
}
