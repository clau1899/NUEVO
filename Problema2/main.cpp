#include <iostream>

using namespace std;

//Implementar un programa que solicite un numero n e imprima los numero desde el 1 hasta n separados por comas.
//OJO, despues del  ́ultimo n ́umero no debe imprimir la ’,’.

int main()
{
    int x;
    cout << "Ingrese un numero por favor" << endl;
    cin>>x;
    for (int i=1;i<=x;i++){
        cout<<i;
        if (i<x){
            cout<<", ";
        }
    }
    return 0;
}