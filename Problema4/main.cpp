#include <iostream>
using namespace std;

bool siSonMultiplosDe2 (int x, int y){
    return (!(x%2 || y%2));
}
bool siSonMultiplos (int x, int y){
    return (!(x%y));
}
bool alCuadrado (int x, int y){
    return (x*x==y);
}
int main()
{
    int x, y;
    cout << "Ingrese el primer numero, por favor: " << endl;
    cin>>x;
    cout << "Ingrese el segundo numero, por favor: " << endl;
    cin>>y;
    cout<<"son multiplos de 2?: ";
    cout<<siSonMultiplosDe2(x,y)<<endl;
    cout<<"Son multiplos entre ellos?: ";
    cout<<siSonMultiplos(x,y)<<endl;
    cout<<y<<" es el cuadrado de "<<x<<"?: ";
    cout<<alCuadrado(x,y);
    return 0;
}
