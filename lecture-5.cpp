/*
====================================================
CS201 - Lecture 5 Complete Practice File
Topics:
1. if statement
2. if else
3. Even Odd
4. Greater Number
5. AND Operator &&
6. OR Operator ||
7. NOT Operator !
====================================================
*/

#include <iostream>   // Input and Output ke liye
using namespace std;

int main()
{
    /*
    ====================================================
    1. SIMPLE IF STATEMENT
    ====================================================
    */

    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Agar number positive hai
    if (number > 0)
    {
        cout << "Number is Positive" << endl;
    }

    /*
    ====================================================
    2. IF ELSE PROGRAM
    ====================================================
    */

    int marks;

    cout << "\nEnter your marks: ";
    cin >> marks;

    // Agar marks 50 ya us se zyada hain
    if (marks >= 50)
    {
        cout << "You are Pass" << endl;
    }
    else
    {
        cout << "You are Fail" << endl;
    }

    /*
    ====================================================
    3. EVEN ODD PROGRAM
    ====================================================
    */

    int evenOdd;

    cout << "\nEnter a number to check Even/Odd: ";
    cin >> evenOdd;

    // % operator remainder deta hai
    // Agar remainder 0 ho to Even number hota hai

    if (evenOdd % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }

    /*
    ====================================================
    4. GREATER NUMBER PROGRAM
    ====================================================
    */

    int num1, num2;

    cout << "\nEnter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Compare karna
    if (num1 > num2)
    {
        cout << "First number is Greater" << endl;
    }
    else
    {
        cout << "Second number is Greater" << endl;
    }

    /*
    ====================================================
    5. AND OPERATOR &&
    ====================================================
    */

    int age;
    char cnic;

    cout << "\nEnter your age: ";
    cin >> age;

    cout << "Do you have CNIC? (y/n): ";
    cin >> cnic;

    // Dono conditions true honi chahiye

    if (age >= 18 && cnic == 'y')
    {
        cout << "Eligible" << endl;
    }
    else
    {
        cout << "Not Eligible" << endl;
    }

    /*
    ====================================================
    6. OR OPERATOR ||
    ====================================================
    */

    char grade;

    cout << "\nEnter your grade: ";
    cin >> grade;

    // Agar A ya B ho

    if (grade == 'A' || grade == 'B')
    {
        cout << "Excellent" << endl;
    }
    else
    {
        cout << "Good" << endl;
    }

    /*
    ====================================================
    7. NOT OPERATOR !
    ====================================================
    */

    int userAge;

    cout << "\nEnter your age again: ";
    cin >> userAge;

    // NOT operator condition ko ulta kar deta hai

    if (!(userAge >= 18))
    {
        cout << "Not Adult" << endl;
    }
    else
    {
        cout << "Adult" << endl;
    }

    /*
    ====================================================
    IMPORTANT NOTES
    ====================================================

    =   Assignment Operator
    ==  Comparison Operator

    &&  AND
    ||  OR
    !   NOT

    %   Modulus Operator (Remainder)

    number % 2 == 0  --> Even
    number % 2 != 0  --> Odd

    ====================================================
    */

    return 0;
}