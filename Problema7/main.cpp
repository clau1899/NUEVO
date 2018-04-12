#include<iostream>

using namespace std;

int imprime(int numero,int cont=1){
    if(cont==100000)
        return 0;
    int a=numero-(numero%(10000/cont));
    cout<<a/(10000/cont)<<"\t";
    return imprime(numero-a,cont*=10);
}
int main( ){

    int n;
    cout<<" INGRESE NUMERO: ";
    cin>>n;
    imprime(n);
    return 0;
}
