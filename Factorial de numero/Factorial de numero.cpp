#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero, factorial = 1;

    cout << "dame un numero: "; cin >> numero;

    for(int i=1; i<=numero;i++)
    {
        factorial = factorial * 1;
    }

    cout << "\nEl factorial de tu numero es: " << factorial << endl;

    system("pause");
    return 0;
}
