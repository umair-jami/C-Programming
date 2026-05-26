/*
========================================
MY FIRST C++ PROGRAM
VS CODE READY VERSION
Beginner Friendly Explanation
========================================
*/


// -------------------------------------
// LIBRARIES
// -------------------------------------

#include <iostream>   // This library is used for input and output (cin and cout)

#include <string>     // This library is used for working with text/string data

using namespace std;  // Allows us to use cout, cin, string directly without writing std::


// =====================================
// MAIN FUNCTION
// =====================================

int main()
{

    // main() is the starting point
    // Program execution starts from here



    // =================================
    // OUTPUT STATEMENT
    // =================================

    cout << "Hi I am your C++ tutor" << endl;
    cout << "Welcome to c++ programming" <<endl;

    // cout = character output
    // Used to print text on screen

    // endl = move cursor to next line



    /*
    =====================================
    VARIABLES
    =====================================

    Variable = container used to store data

    Example:
    int age = 18;

    Here:
    int  = data type
    age  = variable name
    18   = value
    */



    /*
    =====================================
    DATA TYPES IN C++
    =====================================
    */



    // ---------------------------------
    // 1. int
    // ---------------------------------

    // int = integer
    // Stores whole numbers

    int age = 18;
    int marks = 95;



    // ---------------------------------
    // 2. float
    // ---------------------------------

    // float stores decimal numbers

    float cgpa = 3.45;
    float price = 99.9;



    // ---------------------------------
    // 3. double
    // ---------------------------------

    // double stores large decimal values
    // More accurate than float

    double pi = 3.141592;



    // ---------------------------------
    // 4. char
    // ---------------------------------

    // char stores SINGLE character

    char grade = 'A';

    // Character uses single quotes



    // ---------------------------------
    // 5. string
    // ---------------------------------

    // string stores text

    string name = "Umair";

    // String uses double quotes



    // ---------------------------------
    // 6. bool
    // ---------------------------------

    // bool stores true or false

    bool isPassed = true;



    /*
    =====================================
    PRINTING VARIABLES
    =====================================
    */

    cout << endl;

    cout << "Name: " << name << endl;

    cout << "Age: " << age << endl;

    cout << "Marks: " << marks << endl;

    cout << "CGPA: " << cgpa << endl;

    cout << "Price: " << price << endl;

    cout << "Pi Value: " << pi << endl;

    cout << "Grade: " << grade << endl;

    cout << "Passed: " << isPassed << endl;



    /*
    =====================================
    VARIABLE NAMING RULES
    =====================================
    */



    // ---------------------------------
    // RULE 1:
    // Use letters, numbers, underscore
    // ---------------------------------

    int student1 = 10;
    int student_age = 18;



    // ---------------------------------
    // RULE 2:
    // Cannot start with number
    // ---------------------------------

    // Wrong:
    // int 1age = 18;

    // Correct:
    int age1 = 18;



    // ---------------------------------
    // RULE 3:
    // Spaces are not allowed
    // ---------------------------------

    // Wrong:
    // int student age = 18;

    // Correct:
    int studentAgeExample = 18;



    // ---------------------------------
    // RULE 4:
    // Special symbols are not allowed
    // Except underscore (_)
    // ---------------------------------

    // Wrong:
    // int age@ = 18;
    // int total-price = 100;

    // Correct:
    int total_price = 100;



    // ---------------------------------
    // RULE 5:
    // C++ is case-sensitive
    // ---------------------------------

    int small = 5;
    int Small = 10;

    // Both are different variables



    // ---------------------------------
    // RULE 6:
    // Keywords cannot be variable names
    // ---------------------------------

    // Wrong:
    // int int = 5;
    // int return = 10;



    // ---------------------------------
    // RULE 7:
    // Use meaningful names
    // ---------------------------------

    // Bad:
    int x = 50;

    // Good:
    int studentMarks = 50;



    /*
    =====================================
    IMPORTANT SYMBOLS
    =====================================

    <<  = output operator
    >>  = input operator
    ;   = statement ending
    {}  = code block
    ()  = function brackets

    =====================================
    */



    /*
    ========================================
    OPERATOR PRECEDENCE RULES IN C++
    ========================================
    */
/*
========================================
        C++ Operator Precedence Table
========================================

Priority     Operators        Meaning
------------------------------------------------
1             ( )             Parentheses
2             *  /  %         Multiply Divide Modulus
3             +  -            Addition Subtraction

Rules:
------------------------------------------------
1. Parentheses execute first
2. Then *, /, %
3. Then +, -
4. Same precedence operators work Left → Right

Examples:
------------------------------------------------
2 + 3 * 4
= 2 + 12
= 14

(2 + 3) * 4
= 5 * 4
= 20

20 / 5 * 2
= 4 * 2
= 8

========================================
*/
    int result1 = 2 + 3 * 4;

    cout << "Result 1: " << result1 << endl;



    int result2 = (2 + 3) * 4;

    cout << "Result 2: " << result2 << endl;



    int result3 = 10 % 3;

    cout << "Result 3: " << result3 << endl;



    int result4 = 20 / 2 * 5;

    cout << "Result 4: " << result4 << endl;



    // -------------------------------------
    // PRACTICE EXAMPLES
    // -------------------------------------

    int a = 5 + 2 * 3;

    cout << "A = " << a << endl;



    int b = (5 + 2) * 3;

    cout << "B = " << b << endl;



    int c = 20 / 5 + 1;

    cout << "C = " << c << endl;



    int d = 20 / (5 + 1);

    cout << "D = " << d << endl;



    // =================================
    // USER INPUT EXAMPLE
    // =================================

    int inputStudentAge;

    cout << endl;
    cout << "Enter student age: ";

    cin >> inputStudentAge;

    cout << "Student Age is: " << inputStudentAge << endl;



    // =================================
    // AVERAGE PROGRAM
    // =================================

    int ageA, ageB, ageC, ageD;
    float average;

    cout << endl;

    cout << "Enter age of student 1: ";
    cin >> ageA;

    cout << "Enter age of student 2: ";
    cin >> ageB;

    cout << "Enter age of student 3: ";
    cin >> ageC;

    cout << "Enter age of student 4: ";
    cin >> ageD;

    average = (ageA + ageB + ageC + ageD) / 4.0;

    cout << "Average age is: " << average << endl;



    // =================================
    // PROGRAM END
    // =================================

    cout << endl;
    cout << "Program Finished Successfully" << endl;

    cin.get();
    cin.get();

    return 0;
}