#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> wektor = {};
    for(int i =0; i<5;i++)
    {
        cout << "Podaj " << i << " wartosc tablicy";
        cin >> wektor[i];
    }
    for (int i=0;i<wektor.size();i++)
    {
        cout<< "wektor[" << i << "] = " << wektor[i] << endl;
    }
    wektor.push_back(60);
    cout << "Ostatni element (dopisany): " << wektor[wektor.size() -1] << endl;
    wektor.insert(wektor.begin(),0);
    cout << "pierwszy element (dopisany): " << wektor[0] << endl;
    for(int i =0;i<wektor.size();i++)
    {
        cout << "wektor[" << i << "] " <<wektor[i]<<endl;
    }
    return 0;
}