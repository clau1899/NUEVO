#include <iostream>

using namespace std;

//Implementar un programa que evalue si la edad ingresada por teclado se refiere a una persona mayor o menor de edad.

int main()
{
    int x;
    cout << "Ingrese su edad, por favor: " << endl;
    cin>>x;
    (x<18)?cout<<"Eres menor de edad\n":cout<<"Ya eres mayor de edad\n";
    return 0;
}
