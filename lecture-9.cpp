/*
====================================================
CS201 Lecture 9 Notes
====================================================

do while loop syntax:

do
{
    statements;
}
while(condition);

Important:
1. do while minimum ek baar zaroor execute hota hai.
2. while loop zero times bhi chal sakta hai.
3. break loop ko stop karta hai.
4. continue current iteration skip karta hai.
5. Nested loop means loop inside loop.
6. Menu driven programs mostly loops use karte hain.

Difference:

break:
Loop terminate

continue:
Current round skip

====================================================
*/
/*
====================================================
CS201 - Lecture 9 Complete Practice File
Topics:
1. do while loop
2. Validation
3. Menu program
4. Nested loops
5. Patterns
6. break
7. continue
====================================================
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    ====================================================
    1. do while Example
    ====================================================
    */

    int number = 1;

    do
    {
        cout << number << endl;

        number++;
    }
    while(number <= 5);

    /*
    ====================================================
    2. Positive Number Validation
    ====================================================
    */

    int positive;

    do
    {
        cout << "\nEnter positive number: ";
        cin >> positive;

    }
    while(positive <= 0);

    cout << "Valid Number: " << positive << endl;

    /*
    ====================================================
    3. Menu Driven Program
    ====================================================
    */

    int choice;

    do
    {
        cout << "\n1. Hello";
        cout << "\n2. Bye";
        cout << "\n3. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Hello" << endl;
        }
        else if(choice == 2)
        {
            cout << "Bye" << endl;
        }

    }
    while(choice != 3);

    /*
    ====================================================
    4. Square Pattern
    ====================================================
    */

    cout << "\nSquare Pattern:\n";

    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    /*
    ====================================================
    5. Triangle Pattern
    ====================================================
    */

    cout << "\nTriangle Pattern:\n";

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    /*
    ====================================================
    6. break Example
    ====================================================
    */

    cout << "\nBreak Example:\n";

    for(int i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;
        }

        cout << i << endl;
    }

    /*
    ====================================================
    7. continue Example
    ====================================================
    */

    cout << "\nContinue Example:\n";

    for(int i = 1; i <= 5; i++)
    {
        if(i == 3)
        {
            continue;
        }

        cout << i << endl;
    }

    return 0;
}