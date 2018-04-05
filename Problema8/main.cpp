#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero de cinco digitos e indique si se trata de un palindrome.

int main()
{
    int x;
    cout << "Ingrese un numero de 5 digitos: " << endl;
    cin>>x;
    if (x/10000 == (((x%10000)%1000)%100)%10 && (x%10000)/1000 == (((x%10000)%1000)%100)/10 )
        cout<<x<<" es un palindrome"<<endl;
    else
        cout<<x<<" no es un palindrome"<<endl;
    return 0;
}
