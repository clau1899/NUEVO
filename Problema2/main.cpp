#include <iostream>

using namespace std;

//Implementar un programa que solicite un numero n e imprima los numero desde el 1 hasta n separados por comas.
//OJO, despues del  ́ultimo n ́umero no debe imprimir la ’,’.

void imprimeHastaN(int numero,int cont=1)
{
    if (cont>numero)
        return;
    if (numero>=cont){
        cout<<cont;
        if (cont<numero)
            cout<<", ";
        return imprimeHastaN(numero,cont+1);
    }
}
int main()
{
    int x,cont;
    cout << "Ingrese un numero" << endl;
    cin>>x;
    imprimeHastaN(x);
    return 0;
}
