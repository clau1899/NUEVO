#include<iostream>
using namespace std;

void binariopos(int N,int A[100],int n){
    int aux[100];
    int i=0,j=0;
    int bits;
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
void binarioneg(int N,int A[100],int n){//decimal negativo a binario
    int aux[100];
    int i=0,j=0;
    int bits;
    int N1=N;
    if(N<0)
        N=N*(-1)-1;
    else
        N=N-1;
    do{
        aux[i]=N%2;
        N=N/2;
        i++;
    }
    while(N!=0);
    bits=i;
    for(i=0;i<bits;i++)
        A[i]=aux[i];
    for(i=bits;i<n;i++)
        A[i]=0;
    for(int i=0;i<n;i++){
        if(A[i]==0)
            A[i]=1;
        else
            A[i]=0;
    }
    for(int i=n-1;i>=0;i--){
        aux[j]=A[i];
        j++;
    }
    for(int i=0;i<n;i++)
        A[i]=aux[i];
    if(N1==0)
    for(int i=0;i<n;i++)
        A[i]=0;
}
void sumar(int A[100],int B[100],int bits){//suma binaria
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
    int decimal1,decimal2;
    int binpos[100];
    int binneg[100];
    int MDR[100];
    int Aux[100];
    int aux1,aux2,aux;
    int bits1=0,bits2=0,bits;
    int AC[100];
    int bitAdicional=0;
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
        aux=aux/2;
        bits2++;
    }
    while(aux!=0);
    if(bits1>bits2)
        bits=bits1;
    else
        bits=bits2;
    bits=bits+1;
    cout<<"El valor del multiplicando en binario es: \t";
    if(decimal1<0){
        binarioneg(decimal1,binneg,bits);//se llama a la funcion si es negativo
        for(int i=0;i<bits;i++)
            cout<<binneg[i];//imprime multiplicando en bin
    }else{
        binariopos(decimal1,binpos,bits);//cambia el decimal postivo a bin
    for(int i=0;i<bits;i++)
        cout<<binpos[i];//imprime multiplicando
    }
    if(decimal1<0){//guarda el multiplicando dependiendo del digno
        binariopos(decimal1,binpos,bits);
        binarioneg(decimal1,binneg,bits);
    }else{
        binariopos(decimal1,binneg,bits);
        binarioneg(decimal1,binpos,bits);
    }//
    cout<<"\nEl valor del multiplicador en binario es: \t";
    if(decimal2<0)//muestra el valor del multiplicador depediendo del signo
        binarioneg(decimal2,MDR,bits);
    else
        binariopos(decimal2,MDR,bits);
    for(int i=0;i<bits;i++)
        cout<<MDR[i];
    for(int i=0;i<bits;i++)
        AC[i]=0;//llena el acumulador de ceros
    int a;
    a=bits/2;
    for(int SC=bits;SC>=0;SC--){
        cout<<"\n\n               ";
        for(int i=0;i<bits;i++)
            cout<<AC[i];
        cout<<"     ";
        for(int i=0;i<bits;i++)
            cout<<MDR[i];
        cout<<"     ";
        cout<<bitAdicional;
        cout<<"     ";
        cout<<SC;
        if(SC>0){
            if(MDR[bits-1]==bitAdicional){//bit iguales
                for(int i=0;i<bits;i++)
                    Aux[i]=AC[i];
                aux1=AC[bits-1];
                for(int i=0;i<bits;i++)
                    AC[i+1]=Aux[i];
                for(int i=0;i<bits;i++)
                    Aux[i]=MDR[i];
                aux2=MDR[bits-1];
                for(int i=0;i<bits;i++)
                    MDR[i+1]=Aux[i];
                MDR[0]=aux1;
                bitAdicional=aux2;//
            }
            else if(MDR[bits-1]==0 && bitAdicional==1){//0 y 1
                cout<<endl<<"             ";
                cout<<"+ ";
                for(int i=0;i<bits;i++)
                    cout<<binneg[i];
                cout<<endl<<"               ";
                for(int i=0;i<bits;i++)
                    cout<<"_";//
                sumar(AC,binneg,bits);//suma multiplicando + AC
                cout<<endl<<"               ";
                for(int i=0;i<bits;i++)
                    cout<<AC[i];
                for(int i=0;i<bits;i++)
                    Aux[i]=AC[i];
                aux1=AC[bits-1];
                for(int i=0;i<bits;i++)
                    AC[i+1]=Aux[i];
                for(int i=0;i<bits;i++)
                    Aux[i]=MDR[i];
                aux2=MDR[bits-1];
                for(int i=0;i<bits;i++)
                    MDR[i+1]=Aux[i];
                MDR[0]=aux1;
                bitAdicional=aux2;
            }
            else if(MDR[bits-1]==1 && bitAdicional==0){//1 y 0
                cout<<endl<<"             ";
                cout<<"- ";
                for(int i=0;i<bits;i++)
                    cout<<binneg[i];
                cout<<endl<<"               ";
                for(int i=0;i<bits;i++)
                    cout<<"_";
                sumar(AC,binpos,bits);//resta multiplicando menos AC
                cout<<endl<<"               ";//espacio
                for(int i=0;i<bits;i++)
                    cout<<AC[i];//muestra resultado
                for(int i=0;i<bits;i++)
                    Aux[i]=AC[i];
                aux1=AC[bits-1];
                for(int i=0;i<bits;i++)
                    AC[i+1]=Aux[i];
                for(int i=0;i<bits;i++)
                    Aux[i]=MDR[i];
                aux2=MDR[bits-1];
                for(int i=0;i<bits;i++)
                    MDR[i+1]=Aux[i];
                MDR[0]=aux1;
                bitAdicional=aux2;
            }
        }
    }
    cout<<endl<<endl<<endl;
    int mult,MULT[100];
    mult=decimal2*decimal1;
    if(mult<0)
        binarioneg(mult,MULT,2*bits);
    else
        binariopos(mult,MULT,2*bits);
    cout<<"   "<<decimal1<<" * "<<decimal2<<" = "<<decimal1*decimal2<<" = ";
    for(int i=0;i<2*bits;i++)
        cout<<MULT[i];
    cout<<endl<<endl;
    return 0;
}
