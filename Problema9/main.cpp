#include <iostream>

using namespace std;

//Implemente un programa que evalue si un a ̃no es bisiesto.
//bisiesto= si es divisible entre 4, excepto aquellos divisibles entre 100 pero no entre 400.

int main()
{
    int x;
    cout << "Ingrese el año: " << endl;
    cin>>x;
    if (x%4==0 && (x%100!=0 || x%400==0))
        cout<<x<< " es un año bisiesto"<<endl;
    else
        cout<<x<<" no es un año bisiesto"<<endl;
    return 0;
}
