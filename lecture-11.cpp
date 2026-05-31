/*
====================================================
CS201 Lecture 11 Notes
====================================================

Call by Value:
Copy of variable sent to function.

Original variable does NOT change.

Example:
void test(int x)

----------------------------------------------------

Call by Reference:
Original variable directly passed.

Original variable CAN change.

Example:
void test(int &x)

----------------------------------------------------

& operator:
Reference operator

Example:
int &x = a;

----------------------------------------------------

Swap:
Exchange values of variables.

Call by Value:
Swap fails

Call by Reference:
Swap successful

====================================================
*/


/*
====================================================
CS201 - Lecture 11 Complete Practice File
Topics:
1. Call by Value
2. Call by Reference
3. Reference Variables
4. Swapping
====================================================
*/

#include <iostream>
using namespace std;

/*
====================================================
Function Prototypes
====================================================
*/

void changeValue(int x);

void changeReference(int &x);

void swapValues(int &x, int &y);

int main()
{
    /*
    ====================================================
    1. Call by Value
    ====================================================
    */

    int num = 5;

    cout << "Before Function: " << num << endl;

    changeValue(num);

    cout << "After Function: " << num << endl;

    /*
    ====================================================
    2. Call by Reference
    ====================================================
    */

    int value = 10;

    cout << "\nBefore Reference Function: "
         << value << endl;

    changeReference(value);

    cout << "After Reference Function: "
         << value << endl;

    /*
    ====================================================
    3. Reference Variable
    ====================================================
    */

    int a = 50;

    int &b = a;

    cout << "\nValue of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    /*
    ====================================================
    4. Swapping
    ====================================================
    */

    int x = 5;
    int y = 10;

    cout << "\nBefore Swap:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swapValues(x, y);

    cout << "\nAfter Swap:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

/*
====================================================
Function Definitions
====================================================
*/

// Call by Value
void changeValue(int x)
{
    x = 100;

    cout << "Inside changeValue(): "
         << x << endl;
}

// Call by Reference
void changeReference(int &x)
{
    x = 200;

    cout << "Inside changeReference(): "
         << x << endl;
}

// Swapping using reference
void swapValues(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}