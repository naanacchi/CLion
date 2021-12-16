#include <iostream>
using namespace std;

int main()
{
    int number1 {23};
    int number2 {5};
    int result=number1 & number2;
    cout << result << endl;
    result=number1 | number2;
    cout << result << endl;
    result=number1 ^ number2;
    cout << result << endl;
    result= ~number1;
    cout << result << endl;
    result= number1<<3;
    cout << result << endl << endl << endl;
