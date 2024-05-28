#include <iostream>

using namespace std;

int main()
{

    int altura, base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    cout << "Ingrese la base: ";
    cin >> base;

    for (int i = 0; i < base; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 0; i < altura - 2; i++)
    {
        cout << "*";
        for (int j = 0; j < base - 2; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for (int i = 0; i < base; i++)
    {
        cout << "*";
    }
}