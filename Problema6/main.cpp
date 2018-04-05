#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero n e imprima todos los numeros primos menores a n.

int main()
{
    int n;
    cout<<"Ingrese el numero por favor"<<endl;
    cin>>n;
    for (int j=2;j<=n;j++){//por definicion el 1 no es primo, se empieza en 2
        int a=0;//es importante declarar el contador dentro de
        for(int i=1;i<=n;i++){//divide a j entre los números del 1 a n
            if(j%i==0) 
                a++;
        }

        if (a<=2) //si solo tiene dos números divisores entonces es primo y se imprime
        cout<<j<<endl;
    }
    return 0;
}
