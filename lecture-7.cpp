/*
====================================================
CS201 Lecture 7 Notes
====================================================

Counter:
Variable used for counting.

Example:
counter = counter + 1;

Accumulator:
Variable used to store running total.

Example:
sum = sum + number;

Sentinel Value:
Special value used to stop loop.

Example:
-1
0
999

Important:
while(number != -1)

Means:
Loop tab tak chale jab tak number -1 na ho.

Common Mistakes:
1. Update statement bhool jana
2. Accumulator initialize na karna
3. Wrong loop condition

====================================================
*/

/*
====================================================
CS201 - Lecture 7 Complete Practice File
Topics:
1. Counter Controlled Loop
2. Accumulator
3. Sentinel Controlled Loop
4. Average using loop
5. Positive number counter
====================================================
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    ====================================================
    1. Counter Controlled Loop
    ====================================================
    */

    int counter = 1;

    cout << "Counting from 1 to 5:" << endl;

    while(counter <= 5)
    {
        cout << counter << endl;

        counter = counter + 1;
    }

    /*
    ====================================================
    2. Accumulator Example
    ====================================================
    */

    int number = 1;
    int sum = 0;

    while(number <= 5)
    {
        sum = sum + number;

        number = number + 1;
    }

    cout << "\nSum is: " << sum << endl;

    /*
    ====================================================
    3. Sentinel Controlled Loop
    ====================================================
    */

    int input;
    int total = 0;

    cout << "\nEnter numbers (-1 to stop): ";
    cin >> input;

    while(input != -1)
    {
        total = total + input;

        cin >> input;
    }

    cout << "Total Sum is: " << total << endl;

    /*
    ====================================================
    4. Average Program
    ====================================================
    */

    int count = 1;
    int age;
    int totalAge = 0;
    float average;

    while(count <= 5)
    {
        cout << "\nEnter age: ";
        cin >> age;

        totalAge = totalAge + age;

        count = count + 1;
    }

    average = totalAge / 5.0;

    cout << "Average Age is: " << average << endl;

    /*
    ====================================================
    5. Positive Number Counter
    ====================================================
    */

    int value;
    int positiveCount = 0;

    cout << "\nEnter numbers (0 to stop): ";
    cin >> value;

    while(value != 0)
    {
        if(value > 0)
        {
            positiveCount = positiveCount + 1;
        }

        cin >> value;
    }

    cout << "Positive Numbers Count: "
         << positiveCount << endl;

    return 0;
}