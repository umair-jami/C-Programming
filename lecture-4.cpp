/*
====================================================
CS201 - Lecture 4
Topic:
1. Input using cin
2. Output using cout
3. Average age program
4. Arithmetic expressions
5. Modulus operator %
6. Digit separation
7. Circle calculations
====================================================
*/

#include <iostream>   // cin and cout ke liye
using namespace std;  // std:: likhne se bachne ke liye



void demo(){
    int number,digit;
    cout<<"Enter 4-digit number: ";
    cin>>number;

    cout<<"Digits are: ";
    // last digit nikalna
    // number % 10 gives last digit
    digit = number % 10;
    cout<<digit<<" ";
    // last digit remove karna
    number = number / 10; // int division last digit remove kar deti hai
    // last digit nikalna
    digit = number % 10;
    cout<<digit<<" ";
    // last digit remove karna
    number = number / 10;
    // last digit nikalna
    digit = number % 10;
    cout<<digit<<" ";
    // last digit remove karna
    number = number / 10;
    // last digit nikalna
    digit = number % 10;
    // lat remining digit
    cout<<digit<<" ";

}

void circle(){
    float radius,diameter,circumference,area;
     // User se radius lena
    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    // Diameter formula = 2 * radius
    diameter = 2 * radius;

    // Circumference formula = 2 * pi * radius
    circumference = 2 * 3.14 * radius;

    // Area formula = pi * radius * radius
    area = 3.14 * radius * radius;

    // Results show karna
    cout << "The diameter of the circle is: " << diameter << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is: " << area << endl;

}

int main()
{
    // 10 students ki ages store karne ke liye variables
    int age1, age2, age3, age4, age5;
    int age6, age7, age8, age9, age10;

    // TotalAge = sab ages ka sum
    // AverageAge = average age
    int TotalAge, AverageAge;

    // User se ages input lena
    cout << "Please enter the age of student 1: ";
    cin >> age1;

    cout << "Please enter the age of student 2: ";
    cin >> age2;

    cout << "Please enter the age of student 3: ";
    cin >> age3;

    cout << "Please enter the age of student 4: ";
    cin >> age4;

    cout << "Please enter the age of student 5: ";
    cin >> age5;

    cout << "Please enter the age of student 6: ";
    cin >> age6;

    cout << "Please enter the age of student 7: ";
    cin >> age7;

    cout << "Please enter the age of student 8: ";
    cin >> age8;

    cout << "Please enter the age of student 9: ";
    cin >> age9;

    cout << "Please enter the age of student 10: ";
    cin >> age10;

    // Sab ages ko add karna
    TotalAge = age1 + age2 + age3 + age4 + age5
             + age6 + age7 + age8 + age9 + age10;

    // Average nikalna
    // Note: int division decimal part remove kar deti hai
    AverageAge = TotalAge / 10;

    // Result show karna
    cout << "Average age of class is: " << AverageAge;
    demo();
    circle();
    return 0;
}
