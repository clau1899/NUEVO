#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero y evalue si dicho numero es primo

bool primoRecursivo(int numero, int c=2)
{
    if (numero%c==0 && numero !=2)
        return false;
    else if (c>numero/2)
        return true;
    else
        return primoRecursivo (numero, c+1);
}

int main()
{
    int x;
    cout << "Ingrese un numero" << endl;
    cin>>x;
    primoRecursivo(x)?cout<<"Es Primo":cout<<"No es primo";
    return 0;
}
