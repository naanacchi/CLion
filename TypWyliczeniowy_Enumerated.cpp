/*
#include <iostream>
using namespace std;
int main()
{
    enum Ocena { niedostateczny=1,dopuszczajacy=2,dostateczny=3,dobry=4,bardzodobry=5,celujacy=6};
    Ocena ocena = niedostateczny ;
    cout << "Ocena slowna: ";
    switch(ocena){
        case niedostateczny:
            cout <<"niedostateczny " << endl;
            break;
        case dopuszczajacy:
            cout <<"niedostateczny " << endl;
            break;
        case dostateczny:
            cout <<"dostateczny " << endl;
            break;
        case dobry:
            cout <<"dobry " << endl;
            break;
        case bardzodobry:
            cout <<"bardzodobry " << endl;
            break;
        case celujacy:
            cout <<"niedostateczny " << endl;
            break;
        default: cout << "nieokreslona " << endl;
    }
    cout << "Ocena liczbowa: " << ocena << endl;
    return 0;
}
 */
#include <iostream>
using namespace std;
int main()
{
    enum Ocena { niedostateczny=1,dopuszczajacy=2,dostateczny=3,dobry=4,bardzodobry=5,celujacy=6};
    Ocena ocena = niedostateczny ;
    cout << "Ocena slowna: ";
    switch(ocena){
        case niedostateczny:
            cout <<"niedostateczny " << endl;
            break;
        case dopuszczajacy:
            cout <<"niedostateczny " << endl;
            break;
        case dostateczny:
            cout <<"dostateczny " << endl;
            break;
        case dobry:
            cout <<"dobry " << endl;
            break;
        case bardzodobry:
            cout <<"bardzodobry " << endl;
            break;
        case celujacy:
            cout <<"niedostateczny " << endl;
            break;
        default: cout << "nieokreslona " << endl;
    }
    cout << "Ocena liczbowa: " << ocena << endl;
    return 0;
}