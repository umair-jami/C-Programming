/*
====================================================
CS201 Lecture 14 Notes
====================================================

2D Array:
Array with rows and columns.

Syntax:
dataType name[rows][columns];

Example:
int matrix[2][3];

Important:
1. First index = row
2. Second index = column
3. Arrays indexing starts from 0
4. Nested loops mostly used with 2D arrays

Nested Loop Structure:

for(rows)
{
    for(columns)
    {
    }
}

Matrix Addition:
result[row][col]
=
a[row][col] + b[row][col]

Diagonal Elements:
row == col

====================================================
*/

/*
====================================================
CS201 - Lecture 14 Complete Practice File
Topics:
1. 2D Arrays
2. Input/Output
3. Matrix Addition
4. Sum
5. Diagonal Elements
====================================================
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    ====================================================
    1. 2D Array Initialization
    ====================================================
    */

    int matrix[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Matrix:\n";

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << " ";
        }

        cout << endl;
    }

    /*
    ====================================================
    2. User Input in 2D Array
    ====================================================
    */

    int arr[2][2];

    cout << "\nEnter 4 values:\n";

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "\nEntered Values:\n";

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            cout << arr[row][col] << " ";
        }

        cout << endl;
    }

    /*
    ====================================================
    3. Matrix Addition
    ====================================================
    */

    int a[2][2] =
    {
        {1,2},
        {3,4}
    };

    int b[2][2] =
    {
        {5,6},
        {7,8}
    };

    int result[2][2];

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            result[row][col]
            =
            a[row][col] + b[row][col];
        }
    }

    cout << "\nMatrix Addition Result:\n";

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            cout << result[row][col] << " ";
        }

        cout << endl;
    }

    /*
    ====================================================
    4. Sum of Matrix Elements
    ====================================================
    */

    int sum = 0;

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            sum = sum + a[row][col];
        }
    }

    cout << "\nSum is: " << sum << endl;

    /*
    ====================================================
    5. Diagonal Elements
    ====================================================
    */

    int diagonal[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << "\nDiagonal Elements:\n";

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            if(row == col)
            {
                cout << diagonal[row][col] << " ";
            }
        }
    }

    cout << endl;

    return 0;
}