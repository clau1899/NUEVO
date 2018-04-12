#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero de cinco digitos e indique si se trata de un palindrome.

int esPalindrome(int n, int ndig=5){
    if (n<10) return n;
    else return n%10*ndig + esPalindrome(n/10, ndig/10);
}
int main( ){

    int n,ndig=1,aux;
    cout << "Introduce un numero entero: \n";
    cin >> n;
    aux=n;
    while (aux>=10){
      aux/=10;
      ndig*=10;
    }
    aux=esPalindrome(n,ndig);
    (n==aux)?cout<<"Es capicua":cout<<"No es capicua";
    return 0;
}
