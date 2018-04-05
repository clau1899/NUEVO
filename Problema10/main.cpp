#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero n e imprima los n numeros de la serie fibonacci.

int main()
{
    int n,a=0,b=1,c;
    cout << "Ingrese un numero: " << endl;
    cin>>n;
        for (int i=1;i<=n;i++){
            c=a+b;
            cout<<c<<"  ";
            a=b;
            b=c;
    }
    return 0;
}
