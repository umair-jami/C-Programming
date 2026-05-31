#include <iostream>;
using namespace std;
void changeNumber(int num){
    num=100;
    cout<<"Inside function: "<<num<<endl;

}

int main(){
    int number=5;
    changeNumber(number);
    cout<<"Outside function: "<<number<<endl;
    return 0;
}