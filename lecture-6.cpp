/*
====================================================
CS201 Lecture 6 - While Loop Notes
====================================================

Loop:
Same kaam ko baar baar repeat karna.

while loop syntax:

while (condition)
{
    // repeated statements
}

Important parts of while loop:

1. Initialization
   Example: int number = 1;

2. Condition
   Example: while (number <= 10)

3. Update
   Example: number = number + 1;

Important points:

1. while loop condition pehle check karta hai.
2. Agar condition true ho, loop body execute hoti hai.
3. Agar condition false ho, loop stop ho jata hai.
4. while loop zero or more times execute ho sakta hai.
5. Update statement na ho to infinite loop ban sakta hai.
6. Infinite loop ka matlab loop kabhi stop na ho.
7. Overflow tab hota hai jab value variable ki limit se bahar chali jaye.

Example:

int number = 1;

while (number <= 10)
{
    cout << number << endl;
    number = number + 1;
}

====================================================
*/
/*
====================================================
CS201 - Lecture 6 Complete Practice File
Topic:
1. while loop
2. Sum of numbers
3. Infinite loop concept
4. Factorial
5. Overflow concept
====================================================
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    ====================================================
    1. Print numbers from 1 to 10
    ====================================================
    */

    int number = 1;  // initialization

    cout << "Numbers from 1 to 10:" << endl;

    while (number <= 10)  // condition
    {
        cout << number << endl;

        number = number + 1;  // update
    }

    /*
    ====================================================
    2. Sum of numbers from 1 to 10
    ====================================================
    */

    int count = 1;
    int sum = 0;

    while (count <= 10)
    {
        sum = sum + count;   // current count ko sum me add karna
        count = count + 1;   // next number par jana
    }

    cout << "\nSum of first 10 numbers is: " << sum << endl;

    /*
    ====================================================
    3. Sum from 1 to user given limit
    ====================================================
    */

    int limit;
    int current = 1;
    int total = 0;

    cout << "\nEnter upper limit for sum: ";
    cin >> limit;

    while (current <= limit)
    {
        total = total + current;
        current = current + 1;
    }

    cout << "Sum from 1 to " << limit << " is: " << total << endl;

    /*
    ====================================================
    4. Factorial Program
    ====================================================
    */

    int userNumber;
    int factorial = 1;

    cout << "\nEnter a number for factorial: ";
    cin >> userNumber;

    while (userNumber > 1)
    {
        factorial = factorial * userNumber;
        userNumber = userNumber - 1;
    }

    cout << "Factorial is: " << factorial << endl;

    /*
    ====================================================
    Important:
    Infinite loop example is NOT written as running code,
    because it can hang your program.

    Wrong infinite loop example:

    int x = 1;

    while (x <= 10)
    {
        cout << x << endl;
        // x = x + 1; missing
    }

    Because x is not changing, condition remains true forever.
    ====================================================
    */

    return 0;
}