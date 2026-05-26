/*
====================================================
CS201 Lecture 8 Notes
====================================================

for loop syntax:

for(initialization ; condition ; update)
{
    statements;
}

Example:

for(int i = 1; i <= 10; i++)
{
    cout << i;
}

Important:

i++ means:
i = i + 1

i-- means:
i = i - 1

for loop is best for counting problems.

Nested loop:
Loop inside another loop.

Infinite loop:
When update is missing.

====================================================
*/
/*
====================================================
CS201 - Lecture 8 Complete Practice File
Topics:
1. for loop
2. Sum
3. Table
4. Even Odd counting
5. Reverse counting
6. Nested loops
====================================================
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    ====================================================
    1. Print 1 to 10
    ====================================================
    */

    cout << "Numbers from 1 to 10:" << endl;

    for(int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    /*
    ====================================================
    2. Reverse Counting
    ====================================================
    */

    cout << "\nReverse Counting:" << endl;

    for(int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }

    /*
    ====================================================
    3. Sum of first 5 numbers
    ====================================================
    */

    int sum = 0;

    for(int i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }

    cout << "\nSum is: " << sum << endl;

    /*
    ====================================================
    4. Table Program
    ====================================================
    */

    int number;

    cout << "\nEnter number for table: ";
    cin >> number;

    for(int i = 1; i <= 10; i++)
    {
        cout << number
             << " x "
             << i
             << " = "
             << number * i
             << endl;
    }

    /*
    ====================================================
    5. Even Numbers
    ====================================================
    */

    cout << "\nEven Numbers:" << endl;

    for(int i = 2; i <= 20; i = i + 2)
    {
        cout << i << endl;
    }

    /*
    ====================================================
    6. Odd Numbers
    ====================================================
    */

    cout << "\nOdd Numbers:" << endl;

    for(int i = 1; i <= 20; i = i + 2)
    {
        cout << i << endl;
    }

    /*
    ====================================================
    7. Nested Loop
    ====================================================
    */

    cout << "\nNested Loop Output:" << endl;

    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 2; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}