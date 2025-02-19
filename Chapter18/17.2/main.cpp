// This program demonstrates a simple append
// operation on a linked list.
#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
    //Define a numberList object
    NumberList list;

    // Append some values to the list.
    list.appendNode(2.5);
    list.appendNode(7.9);
    list.appendNode(12.6);

    //Display the values in the list
    list.dsplayList();

    //Delete the middle node
    cout << "Now deleting the node in the middle\n";
    list.deleteNode(7.9);

    //Display the list
    list.dsplayList();

    return 0;
}