#include <iostream>

using namespace std;

//Implemente un programa que solicite el ingreso de 3 numeros e imprima: (i)
//el menor, (ii) el mayor b (iii) el promedio de dichos numeros.
void mayMenProm(int a, int b, int c, int &mayor, int &menor, float &prom){
    (a<b && a<c)? menor=a:(b<a && b<c)?menor=b:menor=c;
    (a>b && a>c)? mayor=a:(b>a && b>c)?mayor=b:mayor=c;
    prom=(a+b+c)/3;
}
int main()
{
    int a,b,c,mayor,menor;
    float prom;
    cout << "Ingrese el primer numero" << endl;
    cin>>a;
    cout << "Ingrese el segundo numero" << endl;
    cin>>b;
    cout << "Ingrese el tercer numero" << endl;
    cin>>c;
    mayMenProm(a,b,c,mayor,menor,prom);
    cout<<"el menor es: "<<menor<<endl;
    cout<<"el mayor es: "<<mayor<<endl;
    cout<<"el promedio es: "<<prom<<endl;
    return 0;
}
