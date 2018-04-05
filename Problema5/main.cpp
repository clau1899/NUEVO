#include <iostream>

using namespace std;

//Implemente un programa que solicite un numero y evalue si dicho numero es primo

int main()
{
    int x,t=0;
    cout<<"Ingrese el numero por favor; "<<endl;
    cin>>x;
    for (int i=1; i<=x;i++){
        if(!(x%i))
            t++;
    }
    (t>2)?cout<<x<<" no es primo\n":cout<<x<<" es primo\n";
    
    return 0;
}
