#include <iostream>
using namespace std;

int main()
{

    char ch;
    
    cout << "This progam has paused. Press Enter to continue. ";
    cin.get(ch);
    cout << "It has paused a second time. Please press Enter again. ";
    ch = cin.get();
    cout << "It has paused a third time. Please press Enter again. ";
    cin.get();
    
    
    
    return 0;
}
