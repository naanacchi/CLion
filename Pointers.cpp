#include <iostream>
using namespace std;

int main()
{
    double i=5;
    double *wsk;
    wsk=&i;
    //  cout << i << endl;
    //  cout << ++(*wsk) << endl;
    //  cout << i << endl;
    //  cout << (*wsk) << endl;
    //  cout << ++(*wsk) << endl;
    cout << wsk << endl;
    cout << ++wsk << endl; // wartosc adresu rosnie
    cout << *&i << endl; // operator dereferencji - wyswietla wartosc przechowywana w podanym adresie
    cout << sizeof(double) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(string) << endl;