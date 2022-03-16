//
// Created by Dominik z 3GT on 3/16/2022.
//

#include <iostream>
inline double inline_max(double x,double y){
    return (x>y) ? x : y;  // if x > y return x else return y
}
inline double inline_min(double x,double y){
    return (x<y) ? x : y; // if x < y return x else return y
}

using namespace std;
int main(){
    double a=1,b=2;
    cout << "dane wyjsciowe:" << a <<". " << b << endl;
    cout << "Wiejsza z zadanych liczb= " << inline_max(a,b) << endl;
}