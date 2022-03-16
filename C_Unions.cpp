//
// Created by Dominik z 3GT on 3/10/2022.
//
#include <iostream>
using namespace std;

union Student{
    int ocena;
    string imie;
};

int main()
{
    Student student = {.imie = "andrzej"};
    Student student = {.ocena = 4};
    cout << sizeof(student) << endl;
    cout << sizeof(student.imie) << endl;
    student.imie = "polak";
    cout << sizeof(student) << endl;
    cout << sizeof(student.ocena) << endl;
    student.ocena = 5;
    return 0;
}
