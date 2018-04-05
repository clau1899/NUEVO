#include <iostream>

using namespace std;

//Implemente un programa que solicite dos numeros y evalue:
//a) Si el primer y el segundo numero son multiplos de 2.
//b) Si el primer numero es multiplo del segundo.
//c) Si el primer elevado al cuadrado tiene como resultado el segundo.

int main()
{
    int x, y;
    cout << "Ingrese el primer numero, por favor: " << endl;
    cin>>x;
    cout << "Ingrese el segundo numero, por favor: " << endl;
    cin>>y;
    if (!(x%2 || y%2)){
        cout<<x<<" y "<<y<<" son multiplos de 2"<<endl;
    }
    if (!(x%y)){
        cout<<x<< " es multiplo de "<<y<<endl;
    }
    if (x*x==y)
        cout<<y<<" es el cuadrado de "<<x<<endl;
    return 0;
}
