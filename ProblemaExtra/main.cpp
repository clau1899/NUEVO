#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero n e imprima el valor factorial de dicho numero.

int main()
{
    int n,a,b=1;
    cout << "Ingrese el valor por favor: " << endl;
    cin>>n;
    if (n==0)
        cout<<"1"<<endl;
    for (int i=1;i<=n;i++){
        a=i*b;
        b=a;

    }
    cout<<n<<"!= "<<a<<endl;

    return 0;
}
