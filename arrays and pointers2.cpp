//
// Created by Dominik z 3GT on 1/20/2022.
//

//
// Created by Dominik z 3GT on 1/13/2022.
//
#include <iostream>
using namespace std;


// tablice dynamiczne, o liczbie elementów i elementach podane przez uzytkownika,
//w kazdej z tablic znajdz max element i wypisz ich sumę

int main()
{
    int X; //rozmiar tablicy
    int Y;

    cout << "podaj rozmiar pierwszej tablicy " << endl;
    cin >> X;
    cout << "pierwsza tablica ma rozmiar: " << X << endl;


    double *wsk;
    wsk = new double[X]; // ustalenie rozmiaru tablicy
    for (int i =0; i<X; i++)
    {
        cout << " tablica[" << i << "] = ";
        cin >> *(wsk + i);
    }
    double sumaX{0};
    cout << "podaj rozmiar drugiej tablicy " << endl;
    cin >> Y;
    cout << "druga tablica ma rozmiar " << Y << endl;
    wsk = new double[Y];
    for(int i = 0; i < X; i++)
    {
        sumaX += *(wsk + i);
    }
    cout << "podaj " << X << "wartosci dla pierwszej tablicy: " << endl;
    for (int i =0; i<X; i++)
    {
        cout << " pierwsza tablica[" << i << "] = ";
        cin >> *(wsk + i);
    }
    double sumaY{0};
    for(int i = 0; i < Y; i++)
    {
        sumaY += *(wsk + i);
    }
    cout << "podaj " << Y << " wartosci dla drugiej tablicy: " << endl;
    for (int i =0; i<Y; i++)
    {
        cout << " druga tablica[" << i << "] = ";
        cin >> *(wsk + i);
    }

    cout << "Najwiekszy element w pierwszej tablicy to: " << *max(wsk , wsk + X) << endl;
    cout << "Najwiekszy element w drugiej tablicy to: " << *max(wsk , wsk + Y) << endl;

    delete[] wsk;
    cout << "Suma najwiekszych elementow tablicy wynosi: " << sumaX+sumaY << endl;
    return 0;
}

