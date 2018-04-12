#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero n e imprima todos los numeros primos menores a n.

int primosMenoresaN(int n,int numero=2,int cont=2){
    if (numero==n)
        return 0;
    if(cont==numero){
        cout<<numero<<endl;
        return primosMenoresaN(n,numero+=1,2);
    }
    if (numero%cont==0)
        return primosMenoresaN(n,numero+=1,2);
    return primosMenoresaN(n,numero,cont+=1);
}
int main()
{
    int n;
    cout<<"Ingrese el numero por favor"<<endl;
    cin>>n;
    primosMenoresaN(n);
    return 0;
}

