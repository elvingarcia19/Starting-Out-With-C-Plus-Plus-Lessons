// This program creates three instances of the Rectangle class.
#include <iostream>
using namespace std;

//Rectangle class declaration
class Rectangle
{
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

//************************************************** 
// setWidth assigns a value to the width member. * 
//**************************************************

void Rectangle::setWidth(double w)
{
    width = w;
}

//***************************************************
// setLength assigns a value to the length member. *
//***************************************************

void Rectangle::setLength(double len)
{
    length = len;
}

//***************************************************
// getWidth returns the value in the width member. *
//***************************************************

double Rectangle::getWidth() const
{
    return width;
}

//****************************************************
// getLength returns the value in the length member. *
//****************************************************

double Rectangle::getLength() const
{
    return length;
}

//******************************************************
// getArea returns the product of width times length. *
//******************************************************

double Rectangle::getArea() const
{
    return width * length;
}

//*****************************************************
// Function main                                       *
//*****************************************************

int main()
{
    double number;  //To hold a number
    double totalArea;   //the total area
    Rectangle kitchen;  //Yo hold kitchen dimensions
    Rectangle bedroom;  //To hold bedroom dimensions
    Rectangle den;      //To hold den dimensions

    //Get the kitchen dimenstions
    cout << "What is the kitchen's length? ";
    cin >> number;              //get the length
    kitchen.setLength(number);  //Store in kitchen object
    cout << "What is the kitchen's width? ";
    cin >> number;              //Get the width
    kitchen.setWidth(number);   //Store in the kitchen object

    //Get the bedroom dimensions
    cout << "What is the bedroom's length? ";
    cin >> number;              //Get the length
    bedroom.setLength(number);  //Store in bedroom object
    cout << "What is the bedroom's width? ";
    cin >> number;              //Get the width
    bedroom.setWidth(number);   //Store in bedroom object

    //Get the den dimensions.
    cout << "What is the dens's length? ";
    cin >> number;              //Get the length
    den.setLength(number);  //Store in den object
    cout << "What is the den's width? ";
    cin >> number;              //Get the width
    den.setWidth(number);   //Store in den object

    //Calculate the total area of the three rooms.
    totalArea = kitchen.getArea() + bedroom.getArea() +
                den.getArea();

    //display the total area of the three rooms
    cout << "The total area of the three rooms is "
         << totalArea << endl;
         
    return 0;
}