#include <iostream>

using namespace std;

//Implemente un programa que evalue si un a ̃no es bisiesto.
//bisiesto= si es divisible entre 4, excepto aquellos divisibles entre 100 pero no entre 400.

bool bisiesto(int numero){
    return(!(numero%4))?((!(numero%100)&&(numero%400))?false:true):false;
}
int main( ){

    int n;
    cout << "Introduce un numero entero: \n";
    cin >> n;
    bisiesto(n);
    return 0;
}
