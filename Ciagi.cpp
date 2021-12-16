#include <iostream>
using namespace std;

float ciag(int n)
{
    if(n==1)
        return 3;
    else
// return (ciag(n-1))/((ciag(n-1))+1);
        return (ciag(n-1))/(ciag(n-2));
}

float ciag2(int n)
{
    if(n==1)
        return 3;
    else if(n==2)
        return 0;
    else
        return ((ciag2(n-2))+2)/((ciag2(n-1))+1);
}

int main()
{
    cout << "Przyklad a : " << ciag(25) << endl;
    cout << "Przyklad b : " << ciag2(20);
}