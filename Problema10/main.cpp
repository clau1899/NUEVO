#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero n e imprima los n numeros de la serie fibonacci.

int fibo(int numero)
{
    if((numero==0)||(numero==1))
        return 1;
    return fibo(numero-1)+fibo(numero-2);
}
int main( ){

    int n;
    cout << "Introduce un numero entero: \n";
    cin >> n;
    //fibo(n);
    for (int i=0;i<n;i++)
        cout<<fibo(i)<<", ";
    return 0;
}
