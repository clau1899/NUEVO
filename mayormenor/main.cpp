#include <iostream>

using namespace std;

int main()
{
    int x,y,z,a,b;
    cout << "Ingrese primer numero" << endl;
    cin>>x;
    cout << "Ingrese segundo numero" << endl;
    cin>>y;
    cout << "Ingrese tercer numero" << endl;
    cin>>z;
    cout << "Ingrese cuarto numero" << endl;
    cin>>a;
    cout << "Ingrese quinto numero" << endl;
    cin>>b;
    if (x>y && x>z && x>a && x>b)
        cout<<"El mayor es "<<x<<endl;
    if (y>x && y>z && y>a && y>b)
        cout<<"El mayor es "<<y<<endl;
    if (z>x && z>y && z>a && z>b)
        cout<<"El mayor es "<<z<<endl;
    if (a>x && a>y && a>z && a>b)
        cout<<"El mayor es "<<a<<endl;
    if (b>x && b>y && b>a && b>z)
        cout<<"El mayor es "<<b<<endl;

    if (x<y && x<z && x<a && x<b )
        cout<<"El menor es "<<x<<endl;
    if (y<x && y<z && y<a && y<b)
        cout<<"El menor es "<<y<<endl;
    if (z<x && z<y && z<a && z<b)
        cout<<"El menor es "<<z<<endl;
    if (a<x && a<y && a<z && a<b)
        cout<<"El menor es "<<a<<endl;
    if (b<x && b<y && b<a && b<z)
        cout<<"El menor es "<<b<<endl;
}
