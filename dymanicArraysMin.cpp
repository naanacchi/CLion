//program tktory pobiera od uzytkownika rozmiar tablicy, nastepnie pobierta elementy tablicy, tablica ma byc dynamiczna, nastepnie wypisuje elementy tej tablicy i wypisuje element najmniejszy
#include <iostream>
using namespace std;
int main()
{
    int n; //rozmiar tablicy
    cout << "Podaj rozmiar tablicy: " << endl;
    cin >> n;

    double *wsk;
    wsk = new double[n];
    cout << "podaj ilosc elementow tablicy: " << n << " elementowej" << endl;
    for (int i =0; i<n; i++)
    {
        cout << " tablica[" << i << "] = ";
        cin >> *(wsk + i);
    }
    cout << "elementy tablicy: " << endl;
    for (int i =0; i<n; i++)
    {
        cout <<  *(wsk + i) << endl;
    }
    cout << "Najmniejszy element tablicy to: " << *min(wsk , wsk + n) << endl;
    delete[] wsk;
    return 0;
}

