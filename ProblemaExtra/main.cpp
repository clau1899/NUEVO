#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero n e imprima el valor factorial de dicho numero.

int factorial(int n)
{
    if(n == 1)
        return 1;
    else
        return n*factorial(n-1);
}
int main( ){

    int n;
    cout << "Introduce un numero entero: \n";
    cin >> n;
    cout<<factorial (n);
    return 0;
}
