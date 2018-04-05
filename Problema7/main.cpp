#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero de cinco digitos e imprima los digitos separados por un caracter de tabulacion.

int main()
{
    int x;
    cout << "Ingrese un numero de 5 digitos: " << endl;
    cin>>x;
    cout<<x/10000<<'\t';
    cout<<(x%10000)/1000<<'\t';
    cout<<((x%10000)%1000)/100<<'\t';
    cout<<(((x%10000)%1000)%100)/10<<'\t';
    cout<<(((x%10000)%1000)%100)%10<<'\t';
    return 0;
}

