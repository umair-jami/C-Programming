#include <iostream>
using namespace std;

int main()
{
   int age=20;
   cout<<age<<endl;
   cout<<&age<<endl;
   int age = 20;

    int *ptr;

    ptr = &age;
    return 0;
}