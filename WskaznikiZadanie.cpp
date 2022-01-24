#include <iostream>
using namespace std;
int main()
{
    int Size;
    cout << "Type in Array Size: " << endl;
    cin >> Size;
    double *wsk;
    wsk = new double[Size];
    cout << "Type in" << Size << "Values into array" << endl;
    for(int i=0;i<Size;i++)
    {
        cout << "Array[" << i << "] : ";
        cin >> *(wsk+1);
    }
    cout << "Elements of array: " << endl;
    for(int i=0;i<Size;i++)
    {
        cout << *(wsk+i) << endl;
    }
    double suma{0};
    int min=*wsk;
    for(int i=0;i<Size;i++)
    {
        if(*(wsk+i)<=min)
            min = *(wsk+i);
    }
    int max=*wsk;
    for(int i=0;i<Size;i++)
    {
        if(*(wsk+i)>=max)
            min = *(wsk+i);
    }
    suma = max+min;
    cout << "The Smallest element of array: " << min << endl;
    cout << "The Biggest element of array: " << max << endl;
    cout << "Sum of the extreme elements: " << suma;
    delete[] wsk;
    return 0;
}