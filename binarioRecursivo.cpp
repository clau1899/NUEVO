#include<iostream>

using namespace std;

int binario(int n){
    if(n>1)
        binario(n/2);
    cout<<n%2;
}
int main( ){

    int nro;
    cout<<" INGRESE NUMERO: ";
    cin>>nro;
    cout<<"\n Numero:"<<nro<<endl;
    cout<<"\n Binario:";
    binario(nro);
    return 0;
}
