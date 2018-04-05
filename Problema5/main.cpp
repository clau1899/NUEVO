#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero y evalue si dicho numero es primo

int main()
{
    int x,t=0;
    cout<<"Ingrese el numero por favor; "<<endl;
    cin>>x;
    for (int i=1; i<=x;i++){
        if(x%i==0)
            t++;
    }
    if (t>2)
        cout<<x<<" no es primo"<<endl;
    else
        cout<<x<<" es primo"<<endl;
    return 0;
}
