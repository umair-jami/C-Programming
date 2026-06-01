/*
====================================================
CS201 Lecture 13 Notes
====================================================

String:
Collection of characters.

char:
Single character

Examples:
'A'   --> character
"Ali" --> string

Important:
1. Strings end with '\0'
2. cin stops at space
3. getline reads full line
4. String indexing starts from 0

Important Functions:

strlen() --> length
strcpy() --> copy
strcmp() --> compare
strcat() --> join

Need:
#include <cstring>

====================================================
*/
/*
====================================================
CS201 - Lecture 13 Complete Practice File
Topics:
1. Character Arrays
2. String Input/Output
3. String Length
4. String Copy
5. String Compare
6. String Concatenation
7. String Reverse
====================================================
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    /*
    ====================================================
    1. Simple String
    ====================================================
    */

    char name[] = "Umair";

    cout << "Name: " << name << endl;

    /*
    ====================================================
    2. Input String using getline
    ====================================================
    */

    char fullName[50];

    cout << "\nEnter Full Name: ";

    cin.getline(fullName, 50);

    cout << "Full Name: " << fullName << endl;

    /*
    ====================================================
    3. String Length
    ====================================================
    */

    int length;

    length = strlen(fullName);

    cout << "Length: " << length << endl;

    /*
    ====================================================
    4. String Copy
    ====================================================
    */

    char source[] = "Hello";
    char destination[20];

    strcpy(destination, source);

    cout << "Copied String: "
         << destination << endl;

    /*
    ====================================================
    5. String Compare
    ====================================================
    */

    char a[] = "Ali";
    char b[] = "Ali";

    if(strcmp(a, b) == 0)
    {
        cout << "Strings are Equal" << endl;
    }
    else
    {
        cout << "Strings are Not Equal" << endl;
    }

    /*
    ====================================================
    6. String Concatenation
    ====================================================
    */

    char first[30] = "Hello ";
    char second[] = "World";

    strcat(first, second);

    cout << "Joined String: "
         << first << endl;

    /*
    ====================================================
    7. Reverse String
    ====================================================
    */

    char word[] = "HELLO";

    int size = strlen(word);

    cout << "Reverse: ";

    for(int i = size - 1; i >= 0; i--)
    {
        cout << word[i];
    }

    cout << endl;

    return 0;
}