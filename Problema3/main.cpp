#include <iostream>

using namespace std;

//Implemente un programa que solicite el ingreso de 3 numeros e imprima: (i)
//el menor, (ii) el mayor y (iii) el promedio de dichos numeros.

int main()
{
    float x,y,z;
    cout << "Ingrese el primer numero" << endl;
    cin>>x;
    cout << "Ingrese el segundo numero" << endl;
    cin>>y;
    cout << "Ingrese el tercer numero" << endl;
    cin>>z;
    (x<y && x<z)?cout<<"El menor es: "<<x<<"\n":(y<x && y<z)?cout<<"El menor es: "<<y<<"\n":cout<<"El menor es: "<<z<<"\n";
    (x>y && x>z)?cout<<"El mayor es: "<<x<<"\n":(y>x && y>z)?cout<<"El mayor es: "<<y<<"\n":cout<<"El mayor es: "<<z<<"\n";
    cout<<"El promedio de los numeros es: "<<(x+y+z)/3<<endl;
    return 0;
}
