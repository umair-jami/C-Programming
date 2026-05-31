/*
====================================================
CS201 Lecture 12 Notes
====================================================

Array:
Collection of same type values.

Syntax:
dataType arrayName[size];

Example:
int marks[5];

Important:
1. Array indexing starts from 0.
2. Last index = size - 1.
3. Arrays mostly loops ke sath use hoti hain.
4. marks[i] means current index value.
5. Out of bounds access dangerous hota hai.

Example:
int arr[5];

Valid indexes:
0 1 2 3 4

====================================================
*/

/*
====================================================
CS201 - Lecture 12 Complete Practice File
Topics:
1. Array Declaration
2. Input/Output
3. Sum
4. Average
5. Searching
====================================================
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    ====================================================
    1. Array Initialization
    ====================================================
    */

    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Array Elements:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }

    /*
    ====================================================
    2. User Input in Array
    ====================================================
    */

    int marks[5];

    cout << "\nEnter 5 Marks:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    cout << "\nEntered Marks:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }

    /*
    ====================================================
    3. Sum of Array
    ====================================================
    */

    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    cout << "\nSum is: " << sum << endl;

    /*
    ====================================================
    4. Average of Array
    ====================================================
    */

    float average;

    average = sum / 5.0;

    cout << "Average is: " << average << endl;

    /*
    ====================================================
    5. Searching in Array
    ====================================================
    */

    int search;
    bool found = false;

    cout << "\nEnter number to search: ";
    cin >> search;

    for(int i = 0; i < 5; i++)
    {
        if(marks[i] == search)
        {
            found = true;
        }
    }

    if(found == true)
    {
        cout << "Number Found" << endl;
    }
    else
    {
        cout << "Number Not Found" << endl;
    }

    return 0;
}