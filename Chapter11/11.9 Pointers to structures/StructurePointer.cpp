// This program demonstrates a function that uses a
// pointer to a structure variable as a parameter.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;    //Students name
    int idNum;      //Students ID number
    int creditHours;    //Credit hours enrolled
    double gpa;         //current GPA
};

void getData(Student *);  //Function prototype

int main()
{
    Student freshman;

    //Get the students data.
    cout << "Enter the following student data: \n";
    getData(&freshman); //Pass the address of freshman.
    cout << "\nHere is the student data you entered:\n";

    // Now display the data stored in freshman
    cout << setprecision(3);
    cout << "Name: " << freshman.name << endl;
    cout << "ID Number: " << freshman.idNum << endl;
    cout << "Credit Hours: " << freshman.creditHours << endl;
    cout << "GPA: " << freshman.gpa << endl;
    return 0;
}

//*******************************************************
// Definition of function getData. Uses a pointer to a *
// Student structure variable. The user enters student *
// information, which is stored in the variable. *
//*******************************************************

void getData(Student *s)
{
    //Get the students name.
    cout << "Student name: ";
    getline(cin, s->name); //derrefrences the pointer

    //Get the student ID number
    cout << "Student ID Number: ";
    cin >> s->idNum;

    //get the credit hours 
    cout << "Credit Hours Enrolled: ";
    cin >> s->creditHours;

    //Get the GPA.
    cout << "Current GPA: ";
    cin >> s->gpa;
}