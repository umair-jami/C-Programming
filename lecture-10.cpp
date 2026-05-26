/*
====================================================
CS201 Lecture 10 Notes
====================================================

Function:
Reusable block of code.

Function Parts:
1. Declaration
2. Definition
3. Function Call

Syntax:

returnType functionName(parameters)
{
    statements;
}

void:
No value return

return:
Function answer wapas bhejta hai

Arguments:
Actual values

Parameters:
Receiving variables

Prototype:
Function declaration before main()

Local Variable:
Variable only accessible inside function

====================================================
*/
/*
====================================================
CS201 - Lecture 10 Complete Practice File
Topics:
1. Simple Function
2. Function with Parameters
3. Function with Return
4. Multiple Parameters
5. Local Variables
====================================================
*/

#include <iostream>
using namespace std;

/*
====================================================
Function Prototypes
====================================================
*/

void sayHello();

void printNumber(int num);

int add(int a, int b);

int square(int x);

int main()
{
    /*
    ====================================================
    1. Simple Function Call
    ====================================================
    */

    sayHello();

    /*
    ====================================================
    2. Function with Parameter
    ====================================================
    */

    printNumber(10);

    /*
    ====================================================
    3. Function with Return Value
    ====================================================
    */

    int result;

    result = add(5, 3);

    cout << "\nSum is: " << result << endl;

    /*
    ====================================================
    4. Square Function
    ====================================================
    */

    int answer;

    answer = square(4);

    cout << "Square is: " << answer << endl;

    return 0;
}

/*
====================================================
Function Definitions
====================================================
*/

// Simple void function
void sayHello()
{
    cout << "Hello" << endl;
}

// Function with parameter
void printNumber(int num)
{
    cout << "Number is: " << num << endl;
}

// Function with two parameters and return
int add(int a, int b)
{
    return a + b;
}

// Square function
int square(int x)
{
    return x * x;
}