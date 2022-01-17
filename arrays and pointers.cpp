//
// Created by Dominik z 3GT on 1/13/2022.
//
#include <iostream>
using namespace std;
int main()
{
    int n; //rozmiar tablicy
    cout << "Podaj rozmiar tablicy";
    cout << "n = ";
    cin >> n;

    double *wsk;
    wsk = new double[n];

    cout << "podaj wartosci " << n << " elementów tablicy:" << endl;
    for (int i =0; i<n; i++)
    {
        cout << " tablica[" << i << "] = ";
        cin >> *(wsk + i);
    }

    double suma{0};
    for(int i = 0; i < n; i++)
    {
        suma += *(wsk + i);
    }

    delete[] wsk;
    cout << "Suma elementów tablicy wynosi: " << suma << endl;
    return 0;
}