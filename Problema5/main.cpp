#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero y evalue si dicho numero es primo

bool primoRecursivo(int numero, int c)
{
    if (numero %c==0 && numero !=2)
        return false;
    else if (c>numero/2)
        return true;
    else
        return primoRecursivo (numero, c+1);
}

int main()
{
    int num;
    cout<<"Ingrese el numero por favor; "<<endl;
    cin>>num;
    if(primoRecursivo(num,2))//si la funcion delvuelve true 1
        cout<<"Es Primo";
    else
        cout<<"No es primo";
    return 0;
}
