#include <iostream>
using namespace std;
int main(){

    //calculo del factorial de un numero
    int n;
    int resultadoFactorial=1;
    int contador=1;

    cout<<"Ingrese un numero para calcular su factorial"<<endl;
    cin>>n;

    while(n<0){
        cout<<"Ingrese un numero natural positivo"<<endl;
        cin>>n;
    }

    if(n>0){
        while(contador <= n){
            resultadoFactorial=(resultadoFactorial*contador);
            contador++;
        }
    }

    cout<<"El factorial es "<<resultadoFactorial<<endl;

    //numeros impares con for
    int num=0;

    for(size_t i = 0;num<10 || num>30; i++){
        cout<<"Ingrese un numero mayor a 10 y menor que 30"<<endl;
        cin>>num;
    }

    for (size_t i2 = 1; i2 <= num; i2++){
        if ((i2%2)!=0){
           cout<<i2<<" ";
        }   
    }
    
    //numeros impares con while
    int num2=0;
    int c2=1;

    while(num2<10 || num2>30){
        cout<<endl<<"Ingrese un numero mayor a 10 y menor que 30"<<endl;
        cin>>num2;
    }

    while(c2<=num2){
        if((c2%2)!=0){
           cout<<c2<<" ";
        }
        c2++;
    }
    
    return 0;
}