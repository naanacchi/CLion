//program tktory pobiera od uzytkownika rozmiar tablicy, nastepnie pobierta elementy tablicy, tablica ma byc dynamiczna, nastepnie wypisuje elementy tej tablicy i wypisuje element najmniejszy
#include <iostream>
using namespace std;
int main()
{
    int n; //rozmiar tablicy
    cout << "type in amount of array elements: " << endl;
    cin >> n;

    double *wsk;
    wsk = new double[n];
    cout << "type in values into array having: " << n << " elements" << endl;
    for (int i =0; i<n; i++)
    {
        cout << " array[" << i << "] = ";
        cin >> *(wsk + i);
    }
    cout << "elements of array: " << endl;
    for (int i =0; i<n; i++)
    {
        cout <<  *(wsk + i) << endl;
    }
    double suma{0};
    int min=*wsk;
    for(int i = 0; i < n; i++)
    {
        if(*(wsk+i)<min)
            min=*(wsk+i);
    }
    int max=*wsk;
    for(int i = 0; i < n; i++)
    {
        if(*(wsk+i)>=max)
            max=*(wsk+i);
    }
    suma = max+min;
    cout << "The Smallest element of array: " << min << endl;
    cout << "The Biggest element of array: " << max << endl;
    cout << "Sum of the extreme elements: " << suma;
    delete[] wsk;
    return 0;
}