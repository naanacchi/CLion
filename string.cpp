//
// Created by Dominik z 3GT on 3/10/2022.
//

#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

int main() {
    char S1[50];
    char S2[70];
    cout << "Podaj pierwszy napis" << endl;
    cin.get(S1, 25);
    cout << S1 << endl;
    cout << "podaj drugi napis" << endl;
    cin.get(S2, 50);
    cout << S2 << endl;

    if (strstr(S1, "dom")) {
        strcat(S1, S2);
        cout << "napisane polaczone to" << S1 << endl;
    }

}