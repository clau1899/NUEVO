#include<iostream>
using namespace std;
void binariopos(int N,int A[100],int n){//de decimal positivo a bin
    int aux[100];
    int i=0,j=0;
    int bits;
    //ALMACENA EL RESIDUO EN AUX
    if(N<0)//si es negativo
        N=N*(-1);
    do{
        aux[i]=N%2;
        N=N/2;
        i++;
    }
    while(N!=0);
    bits=i;//bit es igual al numero de divisiones que se logró efectuar
    for(i=0;i<bits;i++)//Pasa los elementos del vector aux al vector A
        A[i]=aux[i];
    for(i=bits;i<n;i++)//se agregan ceros hasta el tamaño de bits max
        A[i]=0;
    for(int i=n-1;i>=0;i--){//se da la vuelta a A y se agrega en orden correcto en aux
        aux[j]=A[i];
        j++;
    }
    for(int i=0;i<n;i++)//se ordena correctamente tambien en A
        A[i]=aux[i];
}
void sumar(int A[100],int B[100],int bits){//suma numeros en bin
    int acarreo=0;
    int suma;
    int m=bits;
    for(int i=0;i<m;i++){
        suma=A[m-(1+i)]+B[m-(1+i)]+acarreo;
        if(suma==0){
            A[m-(1+i)]=suma;
            acarreo=0;
        }
        if(suma==1){
            A[m-(1+i)]=suma;
            acarreo=0;
        }
        if(suma==2){
            A[m-(1+i)]=(suma-2);
            acarreo=1;
        }
        if(suma==3){
            A[m-(1+i)]=(suma-2);
            acarreo=1;
        }
    }
}
int main(){
    int binpos[100];
    int multiplicador[100];
    int Aux[100];              //aux de bin
    int aux1,aux2,aux;         //aux de bits
    int bits1=0,bits2=0,bits;  //bits de cada decimal
    int AC[100];
    int bitAdicional=0;
    int decimal1,decimal2;
    cout<<"Ingrese el primer numero: ";
    cin>>decimal1;
    aux=decimal1;
    do{
        aux/=2;
        bits1++;
    }
    while(aux!=0);//
    cout<<endl<<"Ingrese segundo numero :";
    cin>>decimal2;
    aux=decimal2;
    do{
        aux/=2;
        bits2++;
    }
    while(aux!=0);
    if(bits1>bits2)
        bits=bits1;
    else
        bits=bits2;
    bits=bits+1;//por el posible overflow
    cout<<"El valor del multiplicando en binario es:\t";
    binariopos(decimal1,binpos,bits);
    for(int i=0;i<bits;i++)
        cout<<binpos[i];//se muestra A[100]
    cout<<"\nEl valor del multiplicador en binario es:\t";
    binariopos(decimal2,multiplicador,bits);
    for(int i=0;i<bits;i++)
        cout<<multiplicador[i];
    for(int i=0;i<bits;i++)
        AC[i]=0;//se inicializa a AC con ceros
    int a;
    a=bits/2;
    for(int SC=bits;SC>=0;SC--){//se repite las operaciones tantas veces como bits maximos
        cout<<"\n\n               ";
        for(int i=0;i<bits;i++)//muestra los ceros
            cout<<AC[i];
        cout<<"     ";//espacio
        for(int i=0;i<bits;i++)
            cout<<multiplicador[i];//muestra el multiplicador en binario
        cout<<"     ";
        cout<<bitAdicional;//0
        cout<<"     ";
        cout<<SC;
        if(SC>0){
            if(multiplicador[bits-1]==bitAdicional){
            //*****************ASHR*****************//
                for(int i=0;i<bits;i++)
                    Aux[i]=AC[i];//se llenan de ceros Aux que tenia al multiplicando
                aux1=AC[bits-1];
                for(int i=0;i<bits;i++)//AC CANTIDAD DE 0000000////
                    AC[i+1]=Aux[i];
                for(int i=0;i<bits;i++)//multiplicador - MULTIPLICADOR///////
                    Aux[i]=multiplicador[i];
                aux2=multiplicador[bits-1];
                for(int i=0;i<bits;i++)//multiplicador - MULTIPLICADOR//
                    multiplicador[i+1]=Aux[i];
                multiplicador[0]=aux1;
                bitAdicional=aux2;//
            }
            else if(multiplicador[bits-1]==0 && bitAdicional==1){//0 y 1
    //********MUESTRA LA SUMA************//
                cout<<endl<<"             ";
                cout<<"+ ";
                for(int i=0;i<bits;i++)
                    cout<<binpos[i];
                cout<<endl<<"               ";
                for(int i=0;i<bits;i++)
                    cout<<"_";//
                sumar(AC,binpos,bits);
                cout<<endl<<"               ";
                for(int i=0;i<bits;i++)
                    cout<<AC[i];
                for(int i=0;i<bits;i++)
                    Aux[i]=AC[i];
                aux1=AC[bits-1];
                for(int i=0;i<bits;i++)
                    AC[i+1]=Aux[i];
                for(int i=0;i<bits;i++)
                    Aux[i]=multiplicador[i];
                aux2=multiplicador[bits-1];
                for(int i=0;i<bits;i++)
                    multiplicador[i+1]=Aux[i];
                multiplicador[0]=aux1;
                bitAdicional=aux2;
            }
            else if(multiplicador[bits-1]==1 && bitAdicional==0){//1 y 0
                cout<<endl<<"             ";
                cout<<"- ";
                for(int i=0;i<bits;i++)
                    cout<<binpos[i];
                cout<<endl<<"               ";
                for(int i=0;i<bits;i++)
                    cout<<"_";
                sumar(AC,binpos,bits);

                cout<<endl<<"               ";
                for(int i=0;i<bits;i++)
                    cout<<AC[i];
                for(int i=0;i<bits;i++)
                    Aux[i]=AC[i];
                aux1=AC[bits-1];
                for(int i=0;i<bits;i++)
                    AC[i+1]=Aux[i];
                for(int i=0;i<bits;i++)
                    Aux[i]=multiplicador[i];
                aux2=multiplicador[bits-1];
                for(int i=0;i<bits;i++)
                    multiplicador[i+1]=Aux[i];
                multiplicador[0]=aux1;
                bitAdicional=aux2;
            }
        }
    }
    cout<<endl<<endl<<endl;
    int mult,MULT[100];
    mult=decimal2*decimal1;
    binariopos(mult,MULT,2*bits);
    cout<<"   "<<decimal1<<" * "<<decimal2<<" = "<<mult<<" = ";
    for(int i=0;i<2*bits;i++)
        cout<<MULT[i];
    cout<<endl<<endl;
    return 0;
}
