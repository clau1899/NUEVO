#include <iostream>

using namespace std;

//Implementar un programa que evalue si la edad ingresada por teclado se refiere a una persona mayor o menor de edad.
bool esMayor(int x){
    return (x>=18);
}

int main()
{
    int x;
    cout << "Ingrese su edad, por favor: " << endl;
    cin>>x;
    cout<<esMayor(x);
    return 0;
}
